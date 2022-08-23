class Solution {
public:
    int numberOfMatches(int n) {
        int c = 0;
        while(n > 1) {
            c += (n >> 1);
            int t = n >> 1;
            if(n & 1) n = t + 1;
            else n = t;
        }
        return c;
    }
};