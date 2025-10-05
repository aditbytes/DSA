#include <bits/stdc++.h>
using namespace std;

class PalindromeReorder {
private:
    string s;
    vector<int> freq;

public:
    PalindromeReorder(const string &str) : s(str), freq(26, 0) {}

    // Method to check feasibility
    bool canFormPalindrome() {
        for (char c : s) freq[c - 'A']++;
        int oddCount = 0;
        for (int f : freq) {
            if (f % 2) oddCount++;
        }
        return oddCount <= 1;
    }

    // Method to build palindrome
    string buildPalindrome() {
        if (!canFormPalindrome()) return "NO SOLUTION";

        string firstHalf, secondHalf;
        char oddChar = '\0';
        int oddFreq = 0;

        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2) {
                oddChar = 'A' + i;
                oddFreq = freq[i];
            }
            firstHalf.append(freq[i] / 2, 'A' + i);
        }

        secondHalf = firstHalf;
        reverse(secondHalf.begin(), secondHalf.end());

        if (oddChar != '\0')
            return firstHalf + string(oddFreq, oddChar) + secondHalf;
        else
            return firstHalf + secondHalf;
    }
};

int main() {
    string input;
    cin >> input;

    PalindromeReorder solver(input);
    cout << solver.buildPalindrome() << "\n";

    return 0;
}
