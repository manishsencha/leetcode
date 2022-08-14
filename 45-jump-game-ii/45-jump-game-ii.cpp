class Solution {
public: 
    int dp[10001];
    int jump(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return f(nums, 0, nums.size() - 1);
        
    }
    int f(vector<int> &v, int ind, int n) {
        if(ind >= n) {
            return 0;
        }
        if(dp[ind] != -1) return dp[ind];
        int ans = INT_MAX - 1;
        for(int i = 1; i <= v[ind]; ++i) {
            ans = min(ans, 1 +  f(v, ind + i, n));
        }
        return dp[ind] = ans;
    }
};