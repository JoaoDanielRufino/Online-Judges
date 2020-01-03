int solve(string s, int i, vector<int>& dp) {
    if(i >= s.size())
        return 1;
        
    if(dp[i] != -1)
        return dp[i];
        
    int count = 0;
    
    if(s[i] > '0')
        count = solve(s, i + 1, dp);
        
    if(i + 1 < s.size() && (s[i] == '1' || (s[i] == '2' && s[i+1] <= '6')))
        count += solve(s, i + 2, dp);
        
    return dp[i] = count;
}

int Solution::numDecodings(string A) {
    vector<int> dp(A.size(), -1);
    
    return solve(A, 0, dp);
}
