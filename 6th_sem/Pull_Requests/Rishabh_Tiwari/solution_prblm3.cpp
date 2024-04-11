#include <bits/stdc++.h>
#define num 100000
using namespace std;



const long long mod = 1000000007;
long long N, D, a, b, L, W, LC, WC, sL, sW, sLC, sWC;
vector<int> neighbour[num];
bool lose[num], visited[num];
long long c[num],oW[num],oL[num],h[num];

//calculating the state for all roots
void dfs(int x){
    visited[x] = true; lose[x] = true;
    for(int i:neighbour[x]){
        if(!visited[i]){
            dfs(i);
            if(lose[i]) h[x]++;
        }
    }
    if(h[x]!=0) lose[x] = false;
}
void critical(int x){
    if(lose[x]){
        c[x] = oW[x] + 1;
    } else {
        if(h[x]==1){
            c[x] = oL[x];
        } else {
            c[x] = 0;
        }
    }
}
//calculating critical states
void dfs2(int x){
    visited[x] = true;
    for(int i:neighbour[x]){
        if(!visited[i]){
            dfs2(i);
            if(lose[i]){
                oL[x] += c[i];
            } else {
                oW[x] += c[i];
            }
        }
    }
    critical(x);
}

void reroot(int x, int y){
    if(lose[y]){
        h[x]--; 
        oL[x] -= c[y];
    } else {
        oW[x] -= c[y];
    }
    if(h[x]==0) lose[x] = true;
    critical(x);
    if(lose[x]){
        h[y]++; oL[y] += c[x];
    } else {
        oW[y] += c[x];
    }
    if(h[y]!=0) lose[y] = false;
    critical(y);
}
void evaluate(int x){
    visited[x] = true;
    if(lose[x]){
        L++; 
        LC = (LC+c[x])%mod;
    } else {
        W++; 
        WC = (WC+c[x])%mod;
    }
    for(int i:neighbour[x]){
        if(!visited[i]){
            reroot(x,i);
            evaluate(i);
            reroot(i,x);
        }
    }
}

// bonus dimension
void step(long long pl, long long plc, long long pw, long long pwc){
    sL = ((((pl*N)%mod)*W) % mod+(pwc*L)%mod+((((pl*N)%mod-plc+mod)%mod) * L)%mod) % mod;
    sLC = (plc*WC +pwc*LC) % mod;
    sW = ((((pw*N)%mod)*W)%mod+(plc*L)%mod+((((pw*N)%mod-pwc+mod)%mod)*L)%mod) % mod;
    sWC = (pwc*WC+plc*LC)%mod;
}
//double  dimensions
void step2(long long pl, long long plc, long long pw, long long pwc){
    L = ((((pl*N)% mod)*pw) % mod+(pwc*pl) % mod+((((pl*N)%mod -plc+ mod)%mod)*pl)%mod)%mod;
    LC = (plc*pwc+pwc*plc) % mod;
    W = ((((pw*N) % mod)*pw) % mod+(plc*pl)%mod+((((pw * N)%mod - pwc + mod)%mod)*pl)%mod) % mod;
    WC = (pwc*pwc+plc*plc) % mod;
}
// O(N+logD) solution
int main()
{
    cin>>N>>D;
    for(int i=0; i<N-1; i++){
        cin>>a>>b;
        neighbour[a-1].push_back(b-1);
        neighbour[b-1].push_back(a-1);
    }

    dfs(0);
    for(int i=0;i<N;i++) visited[i] = false;
    dfs2(0);
    for(int i=0;i<N;i++) visited[i] = false;
    evaluate(0);

    if(lose[0]){
        sL = 1; 
        sLC = c[0];
    } else {
        sW = 1; 
        sWC = c[0];
    }

    //using binary representation of D
    while(D>0){
        if(D%2==1) step(sL, sLC, sW, sWC);
        step2(L,LC,W,WC); 
        D /= 2;
    }

    cout<<sW<<'\n';

    return 0;
}
