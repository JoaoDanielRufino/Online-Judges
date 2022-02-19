class Solution {
public:
    int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
    int dy[8] = {0 , 0, 1, -1, 1, -1, 1, -1};
    
    bool canGo(vector<vector<char>>& board, int i, int j) {
        if(i < 0 || j < 0)
            return false;
        
        if(i >= board.size() || j >= board[i].size())
            return false;
        
        return true; 
    }

    bool OK(vector<vector<char>>& board, int i, int j) {
        if(!canGo(board, i, j))        
            return false;
            
        if(board[i][j] == 'M')
            return false;
        
        return board[i][j] == 'E';
    }
    
    char countMines(vector<vector<char>>& board, int i, int j) {
        int mines = 0;
        
        for(int k = 0; k < 8; k++) {
            int x = i + dx[k]; 
            int y = j + dy[k];
            if(canGo(board, x, y) && board[x][y] == 'M') 
                mines++;
        } 
        
        return !mines ? 'B' : mines + '0';
    }
    
    void expand(vector<vector<char>>& board, int i, int j) {
        board[i][j] = countMines(board, i, j);
        if(board[i][j] != 'B')
            return;
         
        for(int k = 0; k < 8; k++) {
            int x = i + dx[k]; 
            int y = j + dy[k];
            if(OK(board, x, y))
                expand(board, x, y);
        } 
    }
    
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        if(board[click[0]][click[1]] == 'M') {
            board[click[0]][click[1]] = 'X';
            return board;
        }
        
        expand(board, click[0], click[1]);
        
        return board;
    }
};
