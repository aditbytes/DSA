#include<iostream>
using namespace std;

int main(){
    int rows = 3;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int cols = 5;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int arr[rows][cols];
    
    cin >> arr[0][0];
    cout << arr[0][0] << endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            arr[i][j] = i + j;
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}