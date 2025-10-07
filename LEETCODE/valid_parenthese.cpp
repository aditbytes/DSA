#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            }
        }
    }
};
int main() {
    Solution sol;
    string s;
    cin >> s;
    cout << sol.isValid(s) << endl;
    return 0;
}