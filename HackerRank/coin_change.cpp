long dp[51][260];

long solve(int n, int index, vector<long> c) {
    if(n < 0 || index >= c.size())
        return 0;
    
    if(!n)
        return 1;
        
    if(dp[index][n] != -1)
        return dp[index][n];
        
    return dp[index][n] = solve(n - c[index], index, c) + solve(n, index+1, c);
}

long getWays(int n, vector<long> c) {
    for(int i = 0; i <= c.size(); i++) {
        for(int j = 0; j <= n; j++) {
            dp[i][j] = -1;
        }
    }
    
    return solve(n, 0, c);
}
