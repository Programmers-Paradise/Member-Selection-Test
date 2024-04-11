#include <bits/stdc++.h>

using namespace std;
#define int long long int
#define INF 9e15
 
int n, m, k;
vector<vector<pair<int,int>>> adj;
vector<vector<int>> dist; 

 
void kShortestPaths(){
 
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; 
 
pq.push({0,1});
 
	while(!pq.empty())
	{
		int u = pq.top().second;
		int cost = pq.top().first;
		pq.pop();
 
		if(dist[u][k-1]<cost) continue;
 
		for(auto it: adj[u])
		{
			int v = it.first;
			int c = it.second;
 
			if(dist[v][k-1]>c+cost) 
			{
				dist[v][k-1] = c+cost;
				pq.push({dist[v][k-1], v});
				sort(dist[v].begin(), dist[v].end());
			}
		}
	}
}
 
int32_t main()
{

	cin>>n>>m>>k;
	adj.resize(n+1);
	dist.resize(n+1);
	for(int i=1;i<=n;i++)
	{
		dist[i].resize(k);
		for(int j = 0; j <k; ++j)
		{
			dist[i][j] = INF;
		}
	}
	dist[1][0] = 0;
	for(int i = 0; i<m; i++)
	{
		int u, v, p;
		cin>>u>>v>>p;
		adj[u].push_back({v,p});
	}
 
kShortestPaths();
 
for(auto it:dist[n]) cout<<it<<" ";
}