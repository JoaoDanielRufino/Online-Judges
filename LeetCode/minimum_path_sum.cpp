class Solution {
public:
    int dp[1000][1000];
    
    int solve(vector<vector<int>>& grid, int x, int y) {
        if(x >= grid.size() || y >= grid[0].size())
            return 1101010;
        
        if(x == grid.size()-1 && y == grid[0].size()-1)
            return grid[x][y];
        
        if(dp[x][y] != -1)
            return dp[x][y];
        
        return dp[x][y] = min(grid[x][y] + solve(grid, x+1, y), grid[x][y] + solve(grid, x, y+1));
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int x = grid.size();
        int y = grid[0].size();
        
        for(int i = 0; i < x; i++) {
            for(int j = 0; j < y; j++) {
                dp[i][j] = -1;
            }
        }
        
        return solve(grid, 0, 0);
    }
};