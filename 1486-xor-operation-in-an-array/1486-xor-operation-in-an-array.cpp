class Solution {
public:
    int xorOperation(int n, int start) {
        int x = 0;
        for(int i = 0; i < n; ++i) {
            x ^= start;
            start += 2;
        }
        return x;
    }
};