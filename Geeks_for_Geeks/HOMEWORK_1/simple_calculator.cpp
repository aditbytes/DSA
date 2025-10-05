#include <bits/stdc++.h>
using namespace std;
int main () {
    char op;
    while (true) {
        cout << "Enter operator (+, -, *, /) or 0 to exit: ";
        if (!(cin >> op)) {
            return 0;
        }
        if (op == '0') {
            break;
        }
        double a, b;
        cout << "Enter two numbers: ";
        if (!(cin >> a >> b)) {
            return 0;
        }
        double result = 0;
        bool valid = true;
        switch (op) {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                if (b == 0) {
                    cout << "Error: Division by zero is not allowed.\n";
                    valid = false;
                } else {
                    result = a / b;
                }
                break;
            default:
                cout << "Invalid operator. Please use +, -, *, / or 0 to exit.\n";
                valid = false;
        }
        if (valid) {
            cout << "Result: " << result << "\n";
        }
    }
    return 0;
}