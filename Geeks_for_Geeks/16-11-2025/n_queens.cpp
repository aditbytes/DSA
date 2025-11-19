#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.'));
        vector<int> cols(n, 0), diag1(2*n - 1, 0), diag2(2*n - 1, 0);
        
        function<void(int)> backtrack = [&](int row) {
            if (row == n) {
                result.push_back(board);
                return;
            }
            for (int col = 0; col < n; ++col) {
                if (cols[col] || diag1[row + col] || diag2[row - col + n - 1]) 
                    continue;
                
                board[row][col] = 'Q';
                cols[col] = diag1[row + col] = diag2[row - col + n - 1] = 1;
                
                backtrack(row + 1);
                
                board[row][col] = '.';
                cols[col] = diag1[row + col] = diag2[row - col + n - 1] = 0;
            }
        };
        
        backtrack(0);
        return result;
    }
};

int main() {
    int n = 1;
    Solution sol;
    vector<vector<string>> solutions = sol.solveNQueens(n);
    
    cout << "Total solutions for " << n << "-Queens: " << solutions.size() << endl;
    for (const auto& board : solutions) {
        for (const auto& row : board) {
            cout << row << endl;
        }
        cout << endl;
    }
    
    return 0;
}