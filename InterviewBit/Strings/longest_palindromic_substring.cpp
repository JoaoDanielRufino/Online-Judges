string Solution::longestPalindrome(string A) {
    if(A == "")
        return A;
    
    int size = A.size();
    int maxLen = 1;
    int start = 0;
    bool dp[size][size];
    
    memset(dp, false, sizeof(dp));
    
    for(int i = 0; i < size; i++) {
        dp[i][i] = true;
    }
    
    for(int i = 0; i < size-1; i++) {
        if(A[i] == A[i+1]) {
            dp[i][i+1] = true;
            start = i;
            maxLen = 2;
        }
    }
    
    for(int k = 3; k <= size; k++) {
        for(int i = 0; i < size-k+1; i++) {
            int j = i + k - 1;
            
            if(dp[i+1][j-1] && A[i] == A[j]) {
                dp[i][j] = true;
                if(k > maxLen) {
                    maxLen = k;
                    start = i;
                }
            }
        }
    }
    
    return A.substr(start, maxLen);
}
