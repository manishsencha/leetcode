class Solution {
public:
    bool res = false;
    bool p(int n) {
        if(n == 1) return true;
        if(n & 1) return false;
        return p(n/2);
    }
    bool reorderedPowerOf2(int n) {
        string s = to_string(n);
        int l = s.length();
        vector<string> v;
        f(s, v, 0, l);
        return res;
    }
    void f(string s, vector<string> &v, int ind, int n) {
        if(ind == n) {
            if(s[0] != '0') {
                res |= p(stoi(s));   
            } 
            return;
        }
        for(int i = ind; i < n; ++i) {
            swap(s[i], s[ind]);
            f(s, v, ind + 1, n);
            swap(s[i], s[ind]);
        }
    }
};