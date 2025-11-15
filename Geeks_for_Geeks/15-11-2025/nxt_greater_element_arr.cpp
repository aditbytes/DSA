#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(nums);
        arr.insert(arr.end(), nums.begin(), nums.end());
        
        vector<int> res(n, -1);

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < 2 * n; j++) {
                if (arr[j] > arr[i]) {
                    res[i] = arr[j];
                    break;
                }
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums = {1, 2, 1};
    
    Solution sol;
    vector<int> result = sol.nextGreaterElements(nums);
    
    cout << "Next Greater Elements: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}