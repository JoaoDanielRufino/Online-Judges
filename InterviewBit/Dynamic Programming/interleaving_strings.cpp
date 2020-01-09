int dp[200][200];

bool solve(string A, string B, string C, int i, int j, int k) {
    if(k >= C.size())
        return i >= A.size() && j >= B.size();
        
    if(dp[i][j] != -1)
        return dp[i][j];
    
    return dp[i][j] = (A[i] == C[k] && solve(A, B, C, i+1, j, k+1)) ||
           (B[j] == C[k] && solve(A, B, C, i, j+1, k+1));
}

int Solution::isInterleave(string A, string B, string C) {
    for(int i = 0; i <= A.size(); i++) {
        for(int j = 0; j <= B.size(); j++) {
            dp[i][j] = -1;
        }
    }
    
    return solve(A, B, C, 0, 0, 0);
}
