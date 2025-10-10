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
};

int main (){
    vector<int> nums = {3, 0, 1};
    solution sol;
    cout << sol.missingNumber(nums) << endl;
    return 0;
}