class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size() - 1, m = mat[0].size() - 1;
        if(n == 0 || m == 0) return mat;
        for(int i = n; i >= 0; --i) {
            for(int j = i, k = 0; k <= m &&  j <= n; j++, k++) {
                for(int a = j + 1, b = k + 1; b <= m && a <= n; a++, b++) {
                    if(mat[a][b] < mat[j][k]) swap(mat[a][b], mat[j][k]);
                }
            }
        }
        for(int i = 0; i <= m; ++i) {
            for(int j = i, k = 0; j <= m && k <= n; j++, k++) {
                for(int a = j + 1, b = k + 1; a <= m && b <= n; a++, b++) {
                    if(mat[b][a] < mat[k][j]) swap(mat[b][a], mat[k][j]);
                }
            }
        }
        return mat;
    }
};