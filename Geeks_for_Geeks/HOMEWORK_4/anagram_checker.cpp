#include <string>
#include <algorithm>
#include <cctype>
#include <iostream>

using namespace std;

bool areAnagrams(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
}

int main() {
    cout << "--- 2. Anagram Checker ---" << endl;
    string anagram1 = "Listen";
    string anagram2 = "Silent";
    if (areAnagrams(anagram1, anagram2)) {
        cout << "\"" << anagram1 << "\" and \"" << anagram2 << "\" are anagrams." << endl;
    } else {
        cout << "\"" << anagram1 << "\" and \"" << anagram2 << "\" are not anagrams." << endl;
    }
    cout << endl;
    return 0;
}

