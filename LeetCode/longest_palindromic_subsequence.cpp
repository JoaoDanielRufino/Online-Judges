class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int dp[s.size()+1][s.size()+1];
        
        string p = s;
        reverse(p.begin(), p.end());
        
        for(int i = 0; i <= s.size(); i++) {
            for(int j = 0; j <= p.size(); j++) {
                if(!i || !j)
                    dp[i][j] = 0;
                else if(s[i-1] == p[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[s.size()][p.size()];
    }
};