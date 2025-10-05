#include <iostream>


using namespace std;

int main() {
    int a;
    cout << "enter a number: ";
    cin >> a;
    int b;
    cout << "enter another number: ";
    cin >> b;
    int c;
    cout << "arthemic operator  ";
    cin >> c;
    switch (c)
    {
    case 1:
        cout << a + b << endl;
        break;
    case 2:
        cout << a - b << endl;
        break;
    case 3:
        cout << a * b << endl;
        break;
    case 4:
        cout << a / b << endl;
        break;
}
    return 0;
}