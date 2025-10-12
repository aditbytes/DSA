#include<iostream>
using namespace std;
int main(){
    vector<int> vec;
    for (int i = 0; i < 5; i++) {
        int b;
        cin >> b;
        vec.push_back(b);
    }
    cout << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl; 
    int target = 7; 
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == target){
            cout << "Element " << target << " found at index: " << i << endl;
            return 0; 
        }
    }
    cout << "Element " << target << " not found in the vector." << endl;
    return 0;
 }