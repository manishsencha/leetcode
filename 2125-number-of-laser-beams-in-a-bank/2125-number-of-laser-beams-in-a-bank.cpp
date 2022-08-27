class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size(), m = bank[0].length();
        vector<int> v;
        for(int i = 0; i < n; ++i) {
            int c = 0;
            for(int j = 0; j < m; ++j)
                if(bank[i][j] == '1') c++;
            if(c) v.push_back(c);
        }
        int res = 0, vn = v.size();
        for(int i = 1; i < vn; ++i) {
            res += (v[i] * v[i - 1]);
        }
        return res;
    }
};