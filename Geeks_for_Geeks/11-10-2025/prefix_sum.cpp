#include<iostream>
using namespace std;
int main(){
    vector <int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        arr.push_back(b);
    }

    vector <int> prefix_sum;
    prefix_sum.push_back(arr[0]);
    for (int i = 1; i < n; i++) {
        prefix_sum.push_back(prefix_sum[i-1] + arr[i]);
    }
    cout << prefix_sum.size() << endl;
    for (int i = 0; i < prefix_sum.size(); i++) {
        cout << prefix_sum[i] << " ";
    }
    return 0;
}