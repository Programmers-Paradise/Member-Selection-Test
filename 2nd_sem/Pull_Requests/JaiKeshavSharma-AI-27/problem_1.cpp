/* 
    Name - JAI KESHAV SHARMA
    BRANCH - AI
    ROLL NO. - 27
*/

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number: ";
    cin >> num;

    while (num != 1)
    {
        (num % 2 == 0) ? num = num / 2 : num = (num * 3) + 1;
        cout << num << " ";
    }

    return 0;
    
}