class Solution {
public:
    int maxDepth(string s) {
        int tres = 0, res = 0, n = s.length();
        for(int i = 0; i < n; ++i) {
            if(s[i] == '(') tres++;
            else if(s[i] == ')') {
                res = max(tres, res);
                tres--;
            }
        }
        return res;
    }
};