#include <iostream>
using namespace std;

class Solution {
public:
    void solveSudoku(vector<vector<int>>& mat) {
        solve(mat);
    }
    bool solve(vector<vector<int>>& mat){
        for(int row = 0; row < 9; row++){
            for(int col = 0; col < 9; col++){
                if(mat[row][col] == 0){
                    for(int num = 1; num <= 9; num++){
                        if(isSafe(mat, row, col, num)){
                            mat[row][col] = num;
                            if(solve(mat)){
                                return true;
                            }
                            mat[row][col] = 0;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool isSafe(vector<vector<int>>& mat, int row, int col, int num){
        for(int i = 0; i < 9; i++){
            if(mat[row][i] == num || mat[i][col] == num){
                return false;
            }
            if(mat[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == num){
                return false;
            }
        }
        return true;
    }
};
