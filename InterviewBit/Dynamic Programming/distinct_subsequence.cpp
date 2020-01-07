int Solution::numDistinct(string A, string B) {
    vector< vector<long long int> > dp(B.size()+1, vector<long long int>(A.size()+1));
    
    for(int i = 0; i <= A.size(); i++)
        dp[0][i] = 1;
        
    for(int i = 1; i <= B.size(); i++) {
        dp[i][0] = 0;
        for(int j = 1; j <= A.size(); j++) {
            if(A[j-1] == B[i-1])
                dp[i][j] = dp[i-1][j-1] + dp[i][j-1];
            else
                dp[i][j] = dp[i][j-1];
        }
    }
    
    return dp[B.size()][A.size()];
}
