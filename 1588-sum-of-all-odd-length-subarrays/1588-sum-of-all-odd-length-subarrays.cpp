class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size(), s = 0;
        for(int i = 1; i <= n; i += 2) {
            for(int j = 0; j <= n - i; ++j) {
                for(int k = j; k < i + j; ++k) {
                    s += arr[k];
                }
            }
        }
        return s;
    }
    
};