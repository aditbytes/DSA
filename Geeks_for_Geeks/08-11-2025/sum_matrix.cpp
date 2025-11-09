#include<iostream>
using namespace std;

int sumMatrix(int matrix[4][4], int rows, int cols) {
    int maxSum = 0; 
    for (int i = 0; i < rows; i++) {
        int rowSum = 0; 
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j]; 
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
        }
    }
    return maxSum; 
}
int main() {
    int matrix[3][4] = { {8,9,7,6}, {2, 1, 8, 6}, {1,2,6,9 } };
    int rows = 3; 
    int cols = 4; 
    int result = sumMatrix(matrix, rows, cols);
    cout << "Maximum sum of a row: " << result << endl;
    return 0;
}