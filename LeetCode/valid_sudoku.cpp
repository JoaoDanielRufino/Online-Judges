class Solution {
public:
    bool checkQ(vector<vector<char>> A, int i, int j) {
        vector<bool> vet(9, false);

        for(int k = 0; k < 3; k++) {
            for(int l = 0; l < 3; l++) {
                if(A[k+i][l+j] == '.')
                    continue;
                int num = A[k+i][l+j] - '0';
                if(vet[num-1])
                    return false;
                vet[num-1] = true;
            }
        }

        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& A) {
        vector<bool> vet(9);
    
        for(int i = 0; i < 9; i++) {
            fill(vet.begin(), vet.end(), false);
            for(int j = 0; j < 9; j++) {
                if(A[i][j] == '.')
                    continue;
                int num = A[i][j] - '0';
                if(vet[num-1])
                    return false;
                vet[num-1] = true;
            }
        }

        for(int i = 0; i < 9; i++) {
            fill(vet.begin(), vet.end(), false);
            for(int j = 0; j < 9; j++) {
                if(A[j][i] == '.')
                    continue;
                int num = A[j][i] - '0';
                if(vet[num-1])
                    return false;
                vet[num-1] = true; 
            }
        }

        for(int i = 0; i < 9; i += 3) {
            for(int j = 0; j < 9; j += 3) {
                if(!checkQ(A, i, j))
                    return false;
            }
        }

        return true;
    }
};