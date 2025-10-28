#include <iostream>
#include <vector> // Use vector for dynamic arrays
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    // Start from the second element (index 1)
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1; // to campare the prevoius one

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(const vector<int>& arr) {
    // Use a range-based for loop for cleaner iteration
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main (){
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    vector<int> arr(n); // Create a vector of size n
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; // Read elements into the vector
    }
    insertionSort(arr);
    cout << "Sorted array: \n";
    printArray(arr);
    return 0;
}