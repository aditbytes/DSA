#include <iostream>
using namespace std;
void pattern (int n){
    if (n == 0) return ;
    cout << n << " ";
    pattern(n-1);
    if (n == 1) return;
        cout << n << " ";
}
int main (){
    int n;
    cin >> n;
    pattern(n);
    return 0;
}
