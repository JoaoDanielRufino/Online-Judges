int dp[1000][1000];

int solve(vector<vector<int> > &A, int i, int j) {
    if(i >= A.size() || j >= A[0].size())
        return 101010;
    
    if(i == A.size()-1 && j == A[0].size()-1)
        return A[i][j];
    
    if(dp[i][j] != -1)
        return dp[i][j];
        
    return dp[i][j] = min(A[i][j] + solve(A, i + 1, j), A[i][j] + solve(A, i, j + 1));
}

int Solution::minPathSum(vector<vector<int> > &A) {
    memset(dp, -1, sizeof(dp));
    
    return solve(A, 0, 0);
}
