#include <iostream>
using namespace std;
class Solution {
    public:
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
};