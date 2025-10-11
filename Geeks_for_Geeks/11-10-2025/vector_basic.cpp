#include<iostream>
using namespace std;
int main(){
    vector<int> a ={
        1,2,3,4,5};
        a.push_back(6);
    cout<< a.size() << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
    }