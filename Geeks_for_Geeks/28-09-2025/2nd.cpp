#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void SumOfSquare(int n){
    int sum=0;
    for (int i = 1; i <= n; i++){
        sum = sum + (i * i);
        cout << sum << endl;
    }
}
int main() {
    int n;
    cin >> n;
    SumOfSquare(n);
    return 0;
}


// int main () {
//     int n;
//     cin >> n;
//     int sum = 0;
//     for (int i = 1; i <= n; i++){
//         sum = sum + (i * i);
//         cout << sum << endl;
//     }
//     return 0;

// }