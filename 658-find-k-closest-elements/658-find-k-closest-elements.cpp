class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int, int>> vp(arr.size());
        for(int i = 0; i < arr.size(); ++i) {
            vp[i] = {abs(arr[i] - x), arr[i]};
        }
        sort(vp.begin(), vp.end());
        // for(auto i : vp) {
        //     cout <<  i.first << ' ' << i.second << endl;
        // }
        vector<int> res(k);
        for(int i = 0; i < k; i++) {
            res[i] = vp[i].second;
        }
        sort(res.begin(), res.end());
        return res;
    }
};