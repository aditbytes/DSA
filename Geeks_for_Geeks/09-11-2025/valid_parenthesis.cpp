#include <iostream>
#include <stack>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s){
            if (c == '(' || c == '[' || c == '{'){
                st.push(c);
            }else {
                if (st.empty()) return false; 
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
int main() {
    Solution sol;
    string s = "{[()]}";
    if (sol.isValid(s)) {
        cout << "The parentheses are valid." << endl;
    } else {
        cout << "The parentheses are not valid." << endl;
    }
    return 0;
}