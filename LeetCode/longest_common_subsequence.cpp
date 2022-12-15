class Solution {
public:
    int solve(string& a, string& b, int i, int j, vector<vector<int>>& dp) {
        if(i == a.size() || j == b.size())
            return 0;

        if(dp[i][j] != -1)
            return dp[i][j];

        if(a[i] == b[j])
            return dp[i][j] = 1 + solve(a, b, i + 1, j + 1, dp);

        return dp[i][j] = max(solve(a, b, i + 1, j, dp), solve(a, b, i, j + 1, dp));
    }

    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.size(), vector<int> (text2.size(), -1));

        return solve(text1, text2, 0, 0, dp);
    }
};

// Or
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int dp[text1.size()+1][text2.size()+1];
        
        for(int i = 0; i <= text1.size(); i++) {
            for(int j = 0; j <= text2.size(); j++) {
                if(!i || !j)
                    dp[i][j] = 0;
                else if(text1[i-1] == text2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[text1.size()][text2.size()];
    }
};
