class Solution {
public:
    int dp[10001];
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp, -1, sizeof(dp));
        return min(f(cost, 0, cost.size()), f(cost, 1, cost.size()));
    }
    int f(vector<int> &cost, int ind, int n) {
        if(ind >= n) {
            return 0;
        }
        if(dp[ind] != -1) return dp[ind];
        return dp[ind] = cost[ind] + min(f(cost, ind + 1, n), f(cost, ind + 2, n));
    }
};