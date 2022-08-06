class Solution {
public:
    bool isAlive(vector<vector<int>>& board, int i, int j) {
        if(i < 0 || j < 0)
            return false;
        
        if(i >= board.size() || j >= board[i].size())
            return false;
        
        return board[i][j];
    }
    
    int getLivingNeighbors(vector<vector<int>>& board, int i, int j) {
        int dx[8] = {1, -1, 0, 0, -1, 1, 1, -1};
        int dy[8] = {0, 0, 1, -1, -1, 1, -1, 1};
        
        int livingNeighbors = 0;
        for(int k = 0; k < 8; k++) {
            livingNeighbors += isAlive(board, i + dx[k], j + dy[k]);
        }
        
        return livingNeighbors;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> aux(board.begin(), board.end());
        
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[i].size(); j++) {
                int livingNeighbors = getLivingNeighbors(aux, i, j);
                if(livingNeighbors < 2 || livingNeighbors > 3)
                    board[i][j] = 0;
                else if(livingNeighbors == 3)
                    board[i][j] = 1;
            }
        }
    }
};
