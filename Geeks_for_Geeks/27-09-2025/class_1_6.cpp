
// swap two variable without 3rd variable 


#include<iostream>
#include<string>
using namespace std;
// int main(){
//     int a = 10;
//     int b = 20;
//     swap(a,b); 
//     cout << "a: " << a << endl; 
//     cout << "b: " << b << endl; 
//     return 0;
// }

// int main (){
//     int a = 10;
//     int b = 20;
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     cout << "a: " << a << endl;
//     cout << "b: " << b << endl;
//     return 0;

// }

int main(){
    int a = 10;
    int b = 20;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    return 0;
}