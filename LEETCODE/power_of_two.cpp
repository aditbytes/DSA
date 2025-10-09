#include <iostream>
#include <cmath>
using namespace std;
class Solution {
    public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        return (n & (n - 1)) == 0;
    }
};



int main() {
    Solution sol;
    int n;
    cin >> n;
    cout << sol.isPowerOfTwo(n) << endl;
    return 0;
}