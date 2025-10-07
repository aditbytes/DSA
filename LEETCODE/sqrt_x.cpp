#include <iostream>
#include <cmath>
using namespace std;
class Solution {
    public:
    int mySqrt(int x) {
        return sqrt(x);
    }
};
int main() {
    Solution sol;
    int x;
    cin >> x;
    cout << sol.mySqrt(x);
}