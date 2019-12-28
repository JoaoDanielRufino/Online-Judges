int Solution::lis(const vector<int> &A) {
    int dp[A.size()], maxLen = 1;
    
    for(int i = 0; i < A.size(); i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++) {
            if(A[i] > A[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        maxLen = max(maxLen, dp[i]);
    }
    
    return maxLen;
}
