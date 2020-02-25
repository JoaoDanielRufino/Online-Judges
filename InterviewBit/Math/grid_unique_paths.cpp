map<pair<int,int>, int> dp;

int solve(int x, int y, int A, int B) {
    if(x > A || y > B)
        return 0;
    
    if(x == A && y == B)
        return 1;
     
    if(dp.count(make_pair(x, y)))
        return dp[make_pair(x, y)];
    
    return dp[make_pair(x, y)] = solve(x + 1, y, A, B) + solve(x, y + 1, A, B);
}

int Solution::uniquePaths(int A, int B) {
    dp.clear();
    
    return solve(0, 0, A-1, B-1);
}
