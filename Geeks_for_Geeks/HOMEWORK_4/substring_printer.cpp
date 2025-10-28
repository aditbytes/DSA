#include <iostream>
#include <string>

using namespace std;

void printAllSubstrings(const string& str) {
    int n = str.length();
    for (int i = 0; i < n; ++i) {
        for (int len = 1; len <= n - i; ++len) {
            string sub = str.substr(i, len);
            cout << "\"" << sub << "\" (length: " << sub.length() << ")" << endl;
        }
    }
}

int main() {
    cout << "--- 3. Substrings of 'hello' ---" << endl;
    printAllSubstrings("hello");
    cout << endl;
    return 0;
}

