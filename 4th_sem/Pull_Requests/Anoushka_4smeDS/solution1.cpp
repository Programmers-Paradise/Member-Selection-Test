//Anoushka chatterjee
//anoushka19c@gmail.com

#include<bits/stdc++.h>

using namespace std;

long grid() {
    long result = 1;
    for (int i = 0; i < 20; i++) {

        for (int j = 0; j < 20; j++) {


            result *= (i + j + 2);

            result /= (j + 1);
        }
    }

    return result;
}

int main() {

    cout << grid() << endl;
    return 0;

}