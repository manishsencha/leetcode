class Solution {
public:
    
    int dp[301][301];
    int res = 0;
    int f(vector<vector<char>> &v, int i, int j){
        if(i < 0 || j < 0) {
            return 0;
        }
        if(dp[i][j] != -1) return dp[i][j];
        int ans = 0;
        int t = min({f(v, i - 1, j), f(v, i, j - 1), f(v, i - 1, j - 1)});
        if(v[i][j] == '1') {
            ans =  1 + t;   
        }
        res = max(res, ans * ans);
        return dp[i][j] = ans;
        
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix[0].size(), n = matrix.size();
        memset(dp, -1, sizeof(dp));
        f(matrix, n - 1, m - 1);
        return res;
    }
  
};