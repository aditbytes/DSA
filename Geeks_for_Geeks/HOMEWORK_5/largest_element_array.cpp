#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findLargest (vector<int> arr, int n){
    int largest = arr[0];
    for (int i =   0; i < n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    
    int largest = findLargest(arr, n);
    cout << "The largest element in the array is: " << largest << endl;
    return 0;
};