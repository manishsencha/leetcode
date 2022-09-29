class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n  = arr.size();
        vector<pair<int, int>> vp(n);        
        for(int i = 0; i < n; ++i) {
            vp[i] = {abs(arr[i] - x), arr[i]};
        }
        sort(vp.begin(), vp.end());
        vector<int> res(k);
        for(int i = 0; i < k; i++) {
            res[i] = vp[i].second;
        }
        sort(res.begin(), res.end());
        return res;
    }
};