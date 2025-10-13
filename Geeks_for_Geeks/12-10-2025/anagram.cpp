#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isAnagram(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main() {
    string s1 = "listen", s2 = "silent";
    if (isAnagram(s1, s2)) cout << "Anagram";
    else cout << "Not Anagram";
}
