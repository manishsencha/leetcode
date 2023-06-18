class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<int> ds;
       set<vector<int>> ans;
       sort(nums.begin(), nums.end());
       rec(ans, ds, nums, 0);
            vector<vector<int>> res(ans.begin(), ans.end());
       return res;
    }
    void rec(set<vector<int>> &ans, vector<int> &ds, vector<int> &nums, int ind) {
        if(ind == nums.size()) {
            ans.insert(ds);
            return; 
        }
        for(int i = ind; i < nums.size(); ++i) {
            ds.push_back(nums[i]);
            rec(ans, ds, nums, i + 1);
            ds.pop_back();
            rec(ans, ds, nums, i + 1);
        }
    }
};