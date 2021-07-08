class Solution {
public:
    bool ok(int i, int j, vector<vector<int>>& board, vector<int>& k) {
        if(k[0] < i && k[1] == j) {
            i--;
            while(i >= 0) {
                if(board[i][j] == 1)
                    return false;
                if(board[i][j] == 2)
                    return true;
                i--;
            }
        } else if(k[0] > i && k[1] == j) {
            i++;
            while(i < board.size()) {
                if(board[i][j] == 1)
                    return false;
                if(board[i][j] == 2)
                    return true;
                i++;
            }
        } else if(k[0] == i && k[1] < j) {
            j--;
            while(j >= 0) {
                if(board[i][j] == 1)
                    return false;
                if(board[i][j] == 2)
                    return true;
                j--;
            }
        } else if(k[0] == i && k[1] > j) {
            j++;
            while(j < board[i].size()) {
                if(board[i][j] == 1)
                    return false;
                if(board[i][j] == 2)
                    return true;
                j++;
            }
        } else if(k[0] < i && k[1] < j) {
            i--;
            j--;
            while(i >= 0 && j >= 0) {
                if(board[i][j] == 1)
                    return false;
                if(board[i][j] == 2)
                    return true;
                i--;
                j--;
            }
        } else if(k[0] < i && k[1] > j) {
            i--;
            j++;
            while(i >= 0 && j < board[i].size()) {
                if(board[i][j] == 1)
                    return false;
                if(board[i][j] == 2)
                    return true;
                i--;
                j++;
            }
        } else if(k[0] > i && k[1] < j) {
            i++;
            j--;
            while(i < board.size() && j >= 0) {
                if(board[i][j] == 1)
                    return false;
                if(board[i][j] == 2)
                    return true;
                i++;
                j--;
            }
        } else if(k[0] > i && k[1] > j) {
            i++;
            j++;
            while(i < board.size() && j < board[i].size()) {
                if(board[i][j] == 1)
                    return false;
                if(board[i][j] == 2)
                    return true;
                i++;
                j++;
            }
        }
        
        return false;
    }
    
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>> board(8, vector<int>(8));
        vector<vector<int>> res;
    
        for(int i = 0; i < queens.size(); i++) {
            board[queens[i][0]][queens[i][1]] = 1;
        }
        
        board[king[0]][king[1]] = 2;
        
        for(int i = 0; i < queens.size(); i++) {
            if(ok(queens[i][0], queens[i][1], board, king)) {
                res.push_back({queens[i][0], queens[i][1]});
            }
        }
        
        return res;
    }
};
