#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = A.size();        
    int m = A[0].size();     

    vector<vector<int>> T(m, vector<int>(n)); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            T[j][i] = A[i][j];
        }
    }

    cout << "Transpose:\n";
    for (auto &row : T) {
        for (auto &x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
