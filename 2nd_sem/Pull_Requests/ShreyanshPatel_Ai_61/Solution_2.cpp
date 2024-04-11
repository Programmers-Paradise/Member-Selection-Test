#include <iostream>

using namespace std;

int solution(int);

int main()
{
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << solution(N) << endl;
    return 0;
}

int solution(int N)
{
    int sum = 0;
    for (int i = 1; i < N; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            sum += i;
        }
        else if (i % 5 == 0)
        {
            sum += i;
        }
        else if (i % 3 == 0)
        {
            sum += i;
        }
    }
    return sum;
}