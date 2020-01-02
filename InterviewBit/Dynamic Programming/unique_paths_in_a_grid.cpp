int dp[105][105];

int solve(vector<vector<int> > &A, int x, int y) {
    if(x >= A.size() || y >= A[x].size() || A[x][y])
        return 0;
        
    if(x == A.size()-1 && y == A[x].size()-1)
        return 1;
        
    if(dp[x][y] != -1)
        return dp[x][y];
        
    return dp[x][y] = solve(A, x + 1, y) + solve(A, x, y + 1);
}

int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    memset(dp, -1, sizeof(dp));
    
    return solve(A, 0, 0);
}
