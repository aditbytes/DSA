#include <iostream>
#include <string>

using namespace std;

void findSubstring(const string& mainStr, const string& toFind) {
    if (mainStr.find(toFind) != string::npos) {
        cout << "Substring \"" << toFind << "\" was found in \"" << mainStr << "\"." << endl;
    } else {
        cout << "Substring \"" << toFind << "\" was not found in \"" << mainStr << "\"." << endl;
    }
}

int main() {
    cout << "--- 4. Using .find() ---" << endl;
    findSubstring("zabcx", "abc");
    findSubstring("zdefx", "abc");
    cout << endl;
    return 0;
}

