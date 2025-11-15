#include<iostream>
using namespace std;

class Solution {
public:
    int firstOccurrence(int arr[], int n, int x) {
        int left = 0, right = n - 1;
        int result = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == x) {
                result = mid;
                right = mid - 1; 
            } else if (arr[mid] < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return result;
    }
};  

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    
    Solution sol;
    int firstIndex = sol.firstOccurrence(arr, n, x);
    
    if (firstIndex != -1) {
        cout << "First occurrence of " << x << " is at index: " << firstIndex << endl;
    } else {
        cout << x << " not found in the array." << endl;
    }
    
    return 0;
}