class Solution {
public:
    void f(vector<int>&nums, vector<int> &ds, vector<vector<int>> &ans, int target, int ind) {
        if(ind == nums.size()) {
            if(target == 0) {
                ans.push_back(ds);
            }
            return;
        }
        if(nums[ind] <= target) {
            ds.push_back(nums[ind]);
            f(nums, ds, ans, target - nums[ind], ind);
            ds.pop_back();
        }
        f(nums, ds, ans, target, ind + 1);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        f(candidates, ds, ans, target, 0);
        return ans;
    }
};