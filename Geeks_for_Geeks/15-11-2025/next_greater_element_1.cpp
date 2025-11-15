#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreaterMap;
        stack<int> s;
        
        for (int num : nums2) {
            while (!s.empty() && s.top() < num) {
                nextGreaterMap[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }
        
        vector<int> result;
        for (int num : nums1) {
            if (nextGreaterMap.find(num) != nextGreaterMap.end()) {
                result.push_back(nextGreaterMap[num]);
            } else {
                result.push_back(-1);
            }
        }
        
        return result;
    }
};

int main() {
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    Solution sol;
    vector<int> result = sol.nextGreaterElements(nums1, nums2);

    cout << "Next Greater Elements: ";
    for (int val : result) cout << val << " ";
    cout << endl;

    return 0;
}
