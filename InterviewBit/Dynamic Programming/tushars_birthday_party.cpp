int Solution::solve(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int capacity = *max_element(A.begin(), A.end());
    vector<int> dp(capacity+1, 10101010);
    dp[0] = 0;
    
    for(int i = 0; i < B.size(); i++) {
        for(int j = B[i]; j <= capacity; j++) {
            if (j >= B[i]) {
                dp[j] = min(dp[j], dp[j-B[i]] + C[i]);
            }
        }
    }
    
    int res = 0;
    for(int i = 0; i < A.size(); i++)
        res += dp[A[i]];
    
    return res;
}
