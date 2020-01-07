int Solution::numTrees(int A) {
    vector<int> dp(A+1);
    
    dp[0] = dp[1] = 1;
    for(int i = 2; i <= A; i++) {
        for(int j = 0; j < i; j++) {
            dp[i] += dp[j] * dp[i-j-1];
        }
    }
    
    return dp[A];
}
