#include<iostream>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\nSorted Array using Bubble Sort: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector <int> arr;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        arr.push_back(b);
    }

    bubbleSort(arr);
    return 0;

}