class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        map<int, int> mp;
        for(int i = 0; i < n; ++i) {
            mp[arr[i]]++;
        }
        int m = mp.size();
        vector<int> v;
        for(auto i : mp) {
            v.push_back(i.second);
        }
        sort(v.begin(), v.end());
        int c = 0, res = 0;
        for(int i = m-1; i >= 0; --i) {
            c += v[i];
            res++;
            if(c >= n/2) {
                break;
            }
        }
        return res;
    }
};