#include <iostream>
using namespace std;

int addTwoArrays(int arr1[], int arr2[], int n, int m, int result[]) {
    int carry = 0;
    int i = n - 1, j = m - 1, k = max(n, m);
    
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        
        if (i >= 0) {
            sum += arr1[i];
            i--;
        }
        
        if (j >= 0) {
            sum += arr2[j];
            j--;
        }
        
        result[k] = sum % 10;
        carry = sum / 10;
        k--;
    }
    
    return k + 1; 
}

int main() {
    int arr1[] = {9, 9, 9};
    int arr2[] = {1,2,5,7,8};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    
    int resultSize = max(n, m) + 1;
    int* result = new int[resultSize];
    
    int startIndex = addTwoArrays(arr1, arr2, n, m, result);
    
    cout << "Resultant Array: ";
    for (int i = startIndex; i < resultSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    delete[] result;
    return 0;
}