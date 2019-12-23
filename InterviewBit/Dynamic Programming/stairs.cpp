int dp[1000];

int solve(int A) {
    if(A < 0)
        return 0;
        
    if(!A)
        return 1;
        
    if(dp[A] != -1)
        return dp[A];
        
    return dp[A] = solve(A - 1) + solve(A - 2);
}

int Solution::climbStairs(int A) {
    memset(dp, -1, sizeof(dp));
    
    return solve(A);
}
