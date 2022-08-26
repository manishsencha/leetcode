class Solution {
public:
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
        vector<int> vi;
        for(auto i : v) {
            if(i[0] != '0') {
                // cout << i << ' ';
                vi.push_back(stoi(i));
            }
        }
        for(auto i : vi) {
            if(p(i)) return true;
        }
        return false;
        
    }
    void f(string s, vector<string> &v, int ind, int n) {
        if(ind == n) {
            v.push_back(s);
            return;
        }
        for(int i = ind; i < n; ++i) {
            swap(s[i], s[ind]);
            f(s, v, ind + 1, n);
            swap(s[i], s[ind]);
        }
    }
};