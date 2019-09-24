class Solution {
public:
    int dp[110][110];
    
    int solve(vector<vector<int>>& obstacleGrid, int x, int y, int m, int n) {
        if(x > m || y > n || obstacleGrid[x][y])
            return 0;
        
        if(x == m && y == n)
            return 1;
        
        if(dp[x][y] != -1)
            return dp[x][y];
        
        return dp[x][y] = solve(obstacleGrid, x + 1, y, m, n) + solve(obstacleGrid, x, y + 1, m, n);
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp, -1, sizeof(dp));
        
        return solve(obstacleGrid, 0, 0, obstacleGrid.size()-1, obstacleGrid[0].size()-1);
    }
};