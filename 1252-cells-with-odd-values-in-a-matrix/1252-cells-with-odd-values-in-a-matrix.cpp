class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> v(m, vector<int>(n, 0));
        for(auto ind : indices) {
            int a = ind[0], b = ind[1];
            for(int i = 0; i < n; ++i) {
                v[a][i]++;
            }
            for(int i = 0; i < m; ++i) {
                v[i][b]++;
            }
        }
        int s = 0;
        for(auto i : v) {
            for(auto j : i)
            {
                if(j & 1) s++;
            }
        }
        return s;
    }
};