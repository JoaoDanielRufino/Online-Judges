class Solution {
public:
    void solve(vector<vector<int>>& matrix, int i, int j) {
        int k;
        
        k = i;
        while(k >= 0)
            matrix[k--][j] = 0;
        
        k = i;
        while(k < matrix.size())
            matrix[k++][j] = 0;
        
        k = j;
        while(k >= 0)
            matrix[i][k--] = 0;
        
        k = j;
        while(k < matrix[i].size())
            matrix[i][k++] = 0;
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        vector< pair<int, int> > zeroesPos;
        
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[i].size(); j++) {
                if(!matrix[i][j])
                    zeroesPos.push_back(make_pair(i, j));
            }
        }
        
        for(int i = 0; i < zeroesPos.size(); i++) {
            solve(matrix, zeroesPos[i].first, zeroesPos[i].second);
        }
    }
};