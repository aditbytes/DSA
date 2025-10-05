#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int row = n; row >= 1; row--) {
        for (int num = n; num >= 1; num--) {
            for (int k = 0; k < row; k++) {
                cout << num;
            }
        }
        cout << endl;
    }
    
    return 0;
}
