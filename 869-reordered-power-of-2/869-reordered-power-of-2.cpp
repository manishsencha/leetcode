class Solution {
public:
    bool res = false;
    bool reorderedPowerOf2(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end());
        // 9 * log2(10) ~ 30
        for(int i = 0; i < 30; ++i) {
            string t = to_string(1 << i);
            sort(t.begin(), t.end());
            if(t == s) return true;
        }
        return false;
    }
};