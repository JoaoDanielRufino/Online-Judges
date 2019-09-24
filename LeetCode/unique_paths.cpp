class Solution {
public:
    int dp[110][110];
    
    int solve(int x, int y, int m, int n) {
        if(x == m && y == n)
            return 1;
        
        if(x > m || y  > n)
            return 0;
        
        if(dp[x][y] != -1)
            return dp[x][y];
        
        return dp[x][y] = solve(x + 1, y, m, n) + solve(x, y + 1, m, n);
    }
    
    int uniquePaths(int m, int n) {
        memset(dp, -1, sizeof(dp));
        
        return solve(1, 1, m, n);
    }
};