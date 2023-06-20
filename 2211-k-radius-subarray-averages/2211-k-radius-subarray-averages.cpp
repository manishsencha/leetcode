#define ull unsigned long long
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(k == 0) return nums;
        int n = nums.size(), div = 2 * k + 1;
        vector<ull> pre(n);
        pre[0] = (ull)nums[0];
        for(int i = 1; i < n; ++i) {
            pre[i] = (ull)pre[i - 1] + (ull)nums[i];
        }
        vector<int> res(n, -1);
        for(int i = k; i < n - k; ++i) {
            ull s = 0;
            if(i == k) {
                s = (ull)pre[i + k];
            }
            else {
                s = (ull)pre[i + k] - (ull)pre[i - k - 1];
            }   
            res[i] = s/(ull)div;
        }
        return res;
    }
};