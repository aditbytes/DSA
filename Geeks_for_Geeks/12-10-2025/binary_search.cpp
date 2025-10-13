#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> vec;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        vec.push_back(b);
    }
    cout << vec.size() << endl;
    int target;
    cout << "Enter the target element: ";
    cin >> target;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == target){
            cout << "Element " << target << " found at index: " << i << endl;
            return 0;}

    return 0;}
    return 0;
        }
