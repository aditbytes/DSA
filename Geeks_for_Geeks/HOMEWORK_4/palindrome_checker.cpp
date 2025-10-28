#include <string>
#include <algorithm>
#include <cctype>
#include <iostream>

using namespace std;

bool isPalindrome(const string& str) {
    string cleanStr;
    for (char c : str) {
        if (isalnum(c)) {
            cleanStr += tolower(c);
        }
    }
    
    string reversedStr = cleanStr;
    reverse(reversedStr.begin(), reversedStr.end());
    
    return cleanStr == reversedStr;
}

int main() {
    cout << "--- 1. Palindrome Checker ---" << endl;
    string palindromeTest = "A man a plan a canal Panama";
    if (isPalindrome(palindromeTest)) {
        cout << "\"" << palindromeTest << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << palindromeTest << "\" is not a palindrome." << endl;
    }
    cout << endl;
    return 0;
}

