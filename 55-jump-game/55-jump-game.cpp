class Solution {
public:
    int dp[10001];
    bool canJump(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return func(nums, 0);
    }
    bool func(vector<int> &v, int ind) {
        if(ind >= v.size() - 1) {
            return true;
        }
        if(v[ind] == 0) return false;
        if(dp[ind] != -1) return dp[ind];
        bool res = false;
        for(int i = 1; i <= v[ind]; ++i){
            if(func(v, ind + i)) {
                res = true;
                break;
            }
            // dp[ind] = res;
        }
        return dp[ind] = res;
    }
};