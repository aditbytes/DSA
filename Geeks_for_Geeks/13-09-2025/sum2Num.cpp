#include <iostream>


using namespace std;

int main() {
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    cout << "sum of " << a << " and " << b << " is " << a + b << endl;
    cout << "product of " << a << " and " << b << " is " << a * b << endl;
    cout << "difference of " << a << " and " << b << " is " << a - b << endl;
    cout << "quotient of " << a << " and " << b << " is " << a / b << endl;
    cout << "remainder of " << a << " and " << b << " is " << a % b << endl;
    return 0;
}