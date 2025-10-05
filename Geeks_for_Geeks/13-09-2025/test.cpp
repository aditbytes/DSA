#include <iostream>
using namespace std;
int main() {
    int a = 10;
    float b = 20.5;
    bool c = true;
    char d = 'A';
    double e = 30.123456;
    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(c) << " byte" << endl;
    cout << "Size of char: " << sizeof(d) << " byte" << endl;
    cout << "Size of double: " << sizeof(e) << " bytes" << endl;
    return 0;
}