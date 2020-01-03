int Solution::coinchange2(vector<int> &A, int B) {
    vector<int> dp(B+1, 0);
    
    dp[0] = 1;
    for(int i = 0; i < A.size(); i++) {
        for(int j = A[i]; j <= B; j++) {
            dp[j] = (dp[j] + dp[j - A[i]]) % 1000007;
        }
    }
    
    return dp[B];
}
