class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res(n);
        if(n & 1){
            int l = 0 - (n >> 1);
            for(int i = 0; i < n; ++i, l++) {
                res[i] = l;
            }
        }
        else {
            int l = 0 - (n >> 1);
            for(int i = 0; i < n; ) {
                if(l == 0) {
                    l++;
                    continue;
                }
                else{
                    res[i++] = l++;
                }
            }
        }
        return res;
    }
};