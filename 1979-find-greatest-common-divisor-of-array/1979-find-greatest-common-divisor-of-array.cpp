class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = INT_MAX, mx = INT_MIN;
        for(auto i : nums) {
            mn = min(mn, i);
            mx = max(mx, i);
        }
        return __gcd(mn, mx);
    }
};