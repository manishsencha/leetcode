class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        f(nums, 0, ds, ans);
        int s = 0;
        for(auto i : ans) {
            if(i.size() == 0) continue;
            int a = i[0];
            for(int j = 1; j < i.size(); ++j) {
                a ^= i[j]; 
            }
            s += a;
        }
        return s;
    }
    void f(vector<int> &v, int ind, vector<int> &ds, vector<vector<int>> &ans) {
        if(ind == v.size()) {
            ans.push_back(ds);
            return;
        }
        ds.push_back(v[ind]);
        f(v, ind + 1, ds, ans);
        ds.pop_back();
        f(v, ind + 1, ds, ans);
    }
    
};