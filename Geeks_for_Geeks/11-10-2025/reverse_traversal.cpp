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
    for (int i = vec.size() - 1; i >= 0; i--) {
        cout << vec[i] << " ";
        }
    return 0;
}