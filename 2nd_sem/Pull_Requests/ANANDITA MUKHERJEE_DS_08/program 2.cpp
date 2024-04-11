#include <iostream>
using namespace std;

int main() {
    int n = 1; // Start from 1
    int sum = 0;

    while (n < 20) {
        if (n % 3 == 0 || n % 5 == 0) {
            sum += n;
        }
        n++;
    }

    cout << "Sum of numbers that are multiples of both 3 and 5 : " << sum << endl;

    return 0;
}