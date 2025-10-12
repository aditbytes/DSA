#include <iostream>
using namespace std;

// two Pointer approach

void reverseArray_1(vector <int> &arr){
    int left = 0;
    int right = arr.size() - 1;
    while (left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    cout << "\nReversed Array using two pointer approach: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// swap method 

void reverseArray_2(vector <int> &arr){
    int n = arr.size();
    for (int i = 0; i < n/2; i++) {
        swap(arr[i], arr[n-i-1]);
    }
    cout << "\nReversed Array using swap method: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// STL method 

void reverseArray_3(vector <int> &arr){
    reverse(arr.begin(), arr.end());
    cout << "\nReversed Array using STL method: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


// using extra space

void reverseArray_4(vector <int> &arr){
    vector <int> temp(arr.size());
    for (int i = 0; i < arr.size(); i++) {
        temp[i] = arr[arr.size() - i - 1];
    }
    arr = temp;
    cout << "\nReversed Array using extra space: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}



// main function

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

    vector<int>arr_1 = arr;
    reverseArray_1(arr_1);
    
    vector<int>arr_2 = arr;
    reverseArray_2(arr_2);
    
    vector<int>arr_3 = arr;
    reverseArray_3(arr_3);
    
    vector<int>arr_4 = arr;
    reverseArray_4(arr_4);
    
    return 0;
}