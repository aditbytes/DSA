#include<iostream>
#include<vector>
using namespace std;

// Define constants for array dimensions for better maintainability
const int ROWS = 3;
const int COLS = 5;

// A type alias for a 2D vector to make the code cleaner
using Matrix = vector<vector<int>>;

// Function to print a 2D array (Matrix)
void printMatrix(const Matrix& arr) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

// Function to add two 2D arrays and store the result in a third
void addMatrices(const Matrix& arr1, const Matrix& arr2, Matrix& result) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main() {
    // Use std::vector for modern, safer 2D arrays
    Matrix arr1(ROWS, vector<int>(COLS));
    Matrix arr2(ROWS, vector<int>(COLS));
    Matrix sumResult(ROWS, vector<int>(COLS));

    // Initialize the two arrays with some values
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr1[i][j] = i + j;      // First array gets i + j
            arr2[i][j] = i * j;      // Second array gets i * j
        }
    }

    // Add the two arrays
    addMatrices(arr1, arr2, sumResult);

    cout << "--- Result of adding the two arrays ---" << endl;
    printMatrix(sumResult);

    return 0;
}