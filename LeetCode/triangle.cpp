class Solution {
public:
    int dp[1000][1000];
    
    int solve(vector<vector<int>>& triangle, int i, int j) {
        if(i >= triangle.size())
            return 0;
        
        if(j >= triangle[i].size())
            return 101010;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int x = triangle[i][j] + solve(triangle, i+1, j);
        int y = triangle[i][j] + solve(triangle, i+1, j+1);
        
        return dp[i][j] = min(x, y);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(dp, -1, sizeof(dp));
        
        return solve(triangle, 0, 0);
    }
};