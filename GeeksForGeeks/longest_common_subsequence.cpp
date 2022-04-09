class Solution
{
    public:
    int dp[1001][1001];
    
    int solve(int x, int y, string s1, string s2)
    {
        if(!x || !y)
            return 0;
            
        if(dp[x][y] != -1)
            return dp[x][y];
            
        if(s1[x-1] == s2[y-1])
            return dp[x][y] = 1 + solve(x-1, y-1, s1, s2);
        
        return dp[x][y] = max(solve(x, y-1, s1, s2), solve(x-1, y, s1, s2));
    }
    
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        for(int i = 0; i <= s1.size(); i++) {
            for(int j = 0; j <= s2.size(); j++) {
                dp[i][j] = -1;
            }
        }
        
        return solve(x, y, s1, s2);
    }
};
