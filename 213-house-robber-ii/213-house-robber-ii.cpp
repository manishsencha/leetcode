class Solution {
public:
    int dp[101][2];
    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return f(nums, 0, nums.size(), 0);
    }
    int f(vector<int> &v, int ind, int n, int bought_first) {
        if(bought_first) {
            if(ind == n - 1) {
                return 0;
            }
        }
        if(ind >= n) return 0; 
        if(dp[ind][bought_first] != -1) return dp[ind][bought_first];
        if(ind == 0) return dp[ind][bought_first] = max(v[ind] + f(v, ind + 2, n, 1), f(v, ind + 1, n, 0));
        return dp[ind][bought_first] = max(v[ind] + f(v, ind + 2, n, bought_first), f(v, ind + 1, n, bought_first));
        
    }
};