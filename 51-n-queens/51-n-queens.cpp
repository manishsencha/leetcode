class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for(int i = 0; i < n; ++i) {
            board[i] = s;
        }
        func(0, board, ans, n);
        return ans;
    }
    void func(int col, vector<string> &board, vector<vector<string>> &ans, int n) {
        if(col == n) {
            ans.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++) {
            if(isSafe(row, col, board, n)) {
                board[row][col] = 'Q';
                func(col + 1, board, ans, n);
                board[row][col] = '.';    
            }
        }
    }
    bool isSafe(int row, int col, vector<string> &board, int n) {
        for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j) {
            if(board[i][j] == 'Q') return false;
        }
        for(int i = col - 1; i >= 0; --i) {
            if(board[row][i] == 'Q') return false;
        }
        for(int i = row + 1, j = col - 1; i < n && j >= 0; ++i, --j) {
             if(board[i][j] == 'Q') return false;
        }
        return true;
    }
};