class Solution {
public:
    int dp[201][201];
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid[0].size(), n = grid.size();
        memset(dp, -1, sizeof(dp));
        return f(grid,0,0, n, m); 
    }
    int f(vector<vector<int>> &v, int i, int j, int m, int n) {
        if(i == m - 1 && j == n - 1) {
            return v[i][j];
        }
        if(dp[i][j] != -1) return dp[i][j];
        if(i == m - 1) {
            return dp[i][j] = v[i][j] + f(v, i, j + 1, m, n);
        }
        if(j == n - 1) {
            return dp[i][j] = v[i][j]  + f(v, i + 1, j, m, n);
        }
        return dp[i][j] = v[i][j] + min(f(v, i + 1, j, m, n), f(v, i, j + 1, m, n));
    }
};