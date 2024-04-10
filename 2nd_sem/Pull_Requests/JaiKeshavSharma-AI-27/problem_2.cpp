#include<iostream>
using namespace std;
int main(){
    int num;
    int sum3 = 0, sum5 = 0;

    cout << "enter the upper limit: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        if (i % 3 == 0) 
        {
            sum3 = sum3 + i;
        }
        else if (i % 5 == 0)
        {
            sum5 = sum5 + i;
        }   
    }
    cout << sum3 + sum5;
    
    return 0;
}