#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;

    vector<int> left(n1);
    vector<int> right(n2);

    for (int i = 0; i < n1; i++){
        left[i] = arr[low + i];
    }
    for (int i = 0; i < n2; i++){
        right[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2){
        if (left[i] <= right[j]){
            arr[k++] = left[i++];
        }
        else {
            arr[k++] = right[j++];
        }
    }
    while (i < n1){
        arr[k++] = left[i++];
    }
    while (j < n2){
        arr[k++] = right[j++];
    }   
}

void mergeSort(vector<int>& arr, int low, int high){
    if (low < high){
        // Safer way to calculate mid to prevent potential overflow
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void printVector(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    
    cout << "Original array: ";
    printVector(arr);

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    printVector(arr);

    return 0;
}