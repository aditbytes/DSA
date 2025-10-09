#include<iostream>
using namespace std;

class solution{
    public:
    int missingNumber(vector<int>& nums){
        int n = nums.size();
        int sum = n * (n + 1) / 2;
        for (int num : nums){
            sum -= num;
        }
        return sum;
    }
i;
}