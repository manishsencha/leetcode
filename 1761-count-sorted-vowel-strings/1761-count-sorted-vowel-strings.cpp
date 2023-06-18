class Solution {
public:  
    int countVowelStrings(int n) {
           return rec(0, 0, n);
    }
    int rec(int ind, int c, int n) {
        if(c == n) return 1;
       int ans = 0;
        for(int i = ind; i <  5; ++i) {
            ans += rec(i, c + 1, n);
        }
        return ans;
    }
};