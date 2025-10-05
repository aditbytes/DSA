#include <bits/stdc++.h>
using namespace std;
int main (){
    const int limit = 100;
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int multiple = p * p; multiple <= limit; multiple += p) {
                isPrime[multiple] = false;
            }
        }
    }

    for (int num = 2; num <= limit; ++num) {
        if (isPrime[num]) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}