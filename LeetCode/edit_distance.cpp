class Solution {
public:
    int dp[1000][1000];
    
    int solve(string s1, string s2, int i, int j) {
        if(!i)
            return j;
        
        if(!j)
            return i;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(s1[i-1] == s2[j-1])
            return dp[i][j] = solve(s1, s2, i-1, j-1);
        
        int aux = solve(s1, s2, i, j-1);
        return dp[i][j] = 1 + min(aux, min(solve(s1, s2, i-1, j), solve(s1, s2, i-1, j-1)));
    }
    
    int minDistance(string word1, string word2) {
        for(int i = 0; i<= word1.size(); i++) {
            for(int j = 0; j <= word2.size(); j++) {
                dp[i][j] = -1;
            }
        }
        
        return solve(word1, word2, word1.size(), word2.size());
    }
};