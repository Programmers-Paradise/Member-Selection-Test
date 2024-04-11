#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    cout << "Enter the number of movies to be shown: ";
    cin >> n;

    int k = n * 2;
    vector<int> arr(k);

    cout << "Enter the starting & ending times: ";
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }

    int sum = 1;
    int j = 1;

    while (j < k)
    {
        for (int m = 0; m < k; m = m + 2)
        {
            if (m != j)
            {
                if (arr[j] == arr[m])
                {
                    sum++;
                }
            }
        }
        j = j + 2;
    }

    cout << "Maximum number of movies that can be watched is: " << sum;

    return 0;
}
