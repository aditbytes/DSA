#include <iostream>
using namespace std;

class Solution {
    public:
    double myPow(double x, int n) {
        return pow(x, n);
    }
};
int main() {
    Solution sol;
    double x;
    int n;
    cin >> x >> n;
    cout << sol.myPow(x, n);
    return 0;
}