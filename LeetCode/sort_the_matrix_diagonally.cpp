class Solution {
public:
    void insertDiagonal(int i, int j, vector<int>& diagonal, vector<vector<int>>& res) {
        for(int x : diagonal) {
            res[i][j] = x;
            i++;
            j++;
        }
    }
    
    vector<int> getDiagonal(int i, int j, vector<vector<int>>& mat) {
        vector<int> diagonal;
        
        while(i < mat.size() && j < mat[i].size()) {
            diagonal.push_back(mat[i][j]);
            i++;
            j++;
        }
        
        return diagonal;
    }
    
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<vector<int>> res(mat.size(), vector<int> (mat[0].size()));
        map< pair<int,int>, vector<int>> mp;
        
        for(int i = 0; i < mat.size(); i++) {
            vector<int> diagonal = getDiagonal(i, 0, mat);
            sort(diagonal.begin(), diagonal.end());
            mp[make_pair(i, 0)] = diagonal;    
        }
        
        for(int j = 1; j < mat[0].size(); j++) {
            vector<int> diagonal = getDiagonal(0, j, mat);
            sort(diagonal.begin(), diagonal.end());
            mp[make_pair(0, j)] = diagonal;
        }
        
        for(int i = 0; i < mat.size(); i++) {
            insertDiagonal(i, 0, mp[make_pair(i, 0)], res);   
        }
        
        for(int j = 1; j < mat[0].size(); j++) {
            insertDiagonal(0, j, mp[make_pair(0, j)], res); 
        }
        
        return res;
    }
};
