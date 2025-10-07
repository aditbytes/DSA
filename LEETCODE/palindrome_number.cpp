#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int original = x;
        int reversed = 0;
        while (x > 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return original == reversed;
    }
};
int main() {
    Solution sol;
    int x;
    cin >> x;
    cout << sol.isPalindrome(x) << endl;
    return 0;
}
