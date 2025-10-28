class Solution {
  public:
    bool isSortedRotated(vector<int>& arr) {
        // code here
        int n  = arr.size();
        int dips = 0;
        
        for (int i = 0; i < n ; i++){
            if (arr[i] > arr[i + 1]){
                dips++;
            }
        }
        if (dips == 0 || dips == n - 1){
            return false;
        }
        
        if ( dips == 1 && arr[n - 1 ] <= arr[0]){
            return true;
        }
        int rises = n - 1 - dips;
        if (rises == 1 && arr[n - 1] >= arr[0]){
            return true;
        }
        return false;
    }
};