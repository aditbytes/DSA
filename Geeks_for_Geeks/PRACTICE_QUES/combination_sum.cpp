#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class solution{
    public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        vector<vector<int>> result;
        vector<int> current;
        sort(candidates.begin(), candidates.end());
        combinationSumHelper(candidates, target, 0, current, result);
        return result;  
    }
    void combinationSumHelper(vector<int>& candidates, int target, int start, vector<int>& current, vector<vector<int>>& result){
        if(target == 0){
            result.push_back(current);
            return;
        }
        for(int i = start; i < candidates.size(); i++){
            if(candidates[i] > target) break;
            current.push_back(candidates[i]);
            combinationSumHelper(candidates, target - candidates[i], i, current, result);
            current.pop_back();
        }
    }   
};

int main(){
    solution s;
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = s.combinationSum(candidates, target);
    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[i].size(); j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;   
}
