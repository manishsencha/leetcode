class Solution {
public:
    int dp[101];
    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return f(nums, 0, nums.size());
    }
    int f(vector<int> &v, int ind, int n) {
        if(ind >= n) {
            return 0;
        }
        if(dp[ind] != -1) return dp[ind];
        return dp[ind] = max(v[ind] + f(v, ind + 2, n), f(v, ind + 1, n));
    }
};