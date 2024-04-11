/*
    Name - Ayush Dhruw 
    branch - 2nd sem (DS)
    roll no. - 15
*/
#include <iostream>
using namespace std;

void func(int x) {
    cout << x << " ";
    if (x == 1) {
        cout << "4 2 1 ";
    } else {
        while (x != 1) {
            if (x % 2 == 0) {
                x /= 2;
                cout << x << " ";
            } else {
                x = 3 * x + 1;
                cout << x << " ";
            }
        }
    }
}

int main() {
    int m;
    cin >> m;
    func(m);
    return 0;
}
