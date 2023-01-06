class Solution {
public:
    int f(vector<int> &costs, int coins, int ind, vector<vector<int>> &dp) {
        if(ind == costs.size()) {
            return 0;
        }
        if(dp[ind][coins] != -1) return dp[ind][coins];
        int a = 0, b = 0;
        if(coins >= costs[ind]) {
            a = 1 + f(costs, coins - costs[ind], ind + 1, dp);
        }
        b = f(costs, coins, ind + 1, dp);
        return dp[ind][coins] = max(a, b);
    }
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int c = 0;
        for(int i  = 0; i < costs.size(); ++i) {
            if(coins >= costs[i]) {
                c++;
                coins -= costs[i];
            }
        }
        return c;
    }
};