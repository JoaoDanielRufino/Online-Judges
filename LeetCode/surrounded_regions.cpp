class Solution {
public:
    void f(vector<vector<char>>& board, int x, int y) {
        if(x < 0 || x >= board.size())
            return;
        
        if(y < 0 || y >= board[0].size())
            return;
        
        if(board[x][y] == 'X' || board[x][y] == '#')
            return;
        
        board[x][y] = '#';
        f(board, x + 1, y);
        f(board, x, y + 1);
        f(board, x - 1, y);
        f(board, x, y - 1);
    }
    
    void solve(vector<vector<char>>& board) {
        if(!board.size())
            return;
        
        int n = board.size(), m = board[0].size();
        
        // Marking all border Os
        for(int i = 0; i < n; i++) {
            if(board[i][0] == 'O')
                f(board, i, 0);
            if(board[i][m-1] == 'O')
                f(board, i, m-1);
        }
        
        for(int j = 0; j < m; j++) {
            if(board[0][j] == 'O')
                f(board, 0, j);
            if(board[n-1][j] == 'O')
                f(board, n-1, j);
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                else if(board[i][j] == '#')
                    board[i][j] = 'O';
            }
        }
    }
};