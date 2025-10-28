#include <iostream>
#include <vector>
using namespace std;


int main() {
    
    vector<vector<int>> matrix(3, vector<int>(4, 0));

    
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
