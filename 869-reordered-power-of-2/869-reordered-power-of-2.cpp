class Solution {
public:
    bool res = false;
    bool reorderedPowerOf2(int n) {
        string s = to_string(n);
        vector<int> val;
        for(int i = 1; i <= 1e9; i *= 2) val.push_back(i);
        int l = s.length();
        f(s, 0, l, val);
        return res;
    }
    void f(string s, int ind, int n, vector<int> &v) {
        if(ind == n) {
            if(s[0] != '0') {
                int a = stoi(s);
                for(auto i : v) {
                    if(i == a) res |= true;
                }
            }
            return;
        }
        for(int i = ind; i < n; ++i) {
            swap(s[i], s[ind]);
            f(s, ind + 1, n, v);
            swap(s[i], s[ind]);
        }
    }
};