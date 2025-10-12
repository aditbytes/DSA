#include <iostream>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};

int main (){
    //Solution sol;
    //vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
   // cout << sol.maxSubArray(nums) << endl;
    int n;

    int arr[n]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    return 0;
}