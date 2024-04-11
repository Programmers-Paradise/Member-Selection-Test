#include <iostream>

using namespace std;

void solution(int);

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    solution(n);
    return 0;
}

void solution(int n){
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            cout << n << " ";
        }
        else
        {
            n = n * 3 + 1;
            cout << n << " ";
        }
    }
}
