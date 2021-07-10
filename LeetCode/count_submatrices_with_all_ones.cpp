class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int res = 0;
        vector<vector<int>> dp(mat.size(), vector<int>(mat[0].size(), 0));
        
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {              
                if ( !j || mat[i][j] == 0)    
                    dp[i][j] = mat[i][j];               
                else 
                    dp[i][j] =  1 + dp[i][j - 1];
                
                int tmp = dp[i][j];
                for(int k = i; k >= 0; k--){
                    tmp = min(dp[k][j], tmp);
                    res += tmp;
                }
            }
        }
        
        return res;
    }
};
