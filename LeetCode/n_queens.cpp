class Solution {
public:
    vector< vector<string> > res;
    
    bool OK(vector<string> mat, int row, int col) {
        int i, j;
        
        for(i = 0; i < col; i++) {
            if(mat[row][i] == 'Q')
                return false;
        }
        
        for(i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if(mat[i][j] == 'Q')
                return false;
        }
    
        for(i = row, j = col; i < mat.size() && j >= 0; i++, j--) {
            if(mat[i][j] == 'Q')
                return false;
        }
        
        return true;
    }
    
    void solve(vector<string> mat, int col) {
        if(col >= mat.size()) {
            res.push_back(mat);
            return;
        }
        
        for(int i = 0; i < mat.size(); i++) {
            if(OK(mat, i, col)) {
                mat[i][col] = 'Q';
                solve(mat, col + 1);
                mat[i][col] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> mat;
        string aux;
        
        for(int i = 0; i < n; i++)
            aux += ".";
        
        for(int i = 0; i < n; i++)
            mat.push_back(aux);
        
        solve(mat, 0);
        
        return res;
    }
};