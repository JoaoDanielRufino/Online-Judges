int Solution::wordBreak(string s, vector<string> &wordDict) {
    vector<bool> dp(s.size()+1, false);
    unordered_set<string> dict(wordDict.begin(), wordDict.end());
    
    dp[0] = true;
    for(int i = 1; i <= s.size(); i++) {
        for(int j = i-1; j >= 0; j--)
            dp[i] = dp[i] || dp[j] && dict.count(s.substr(j, i-j));
    }
            
    return dp[s.size()];
}
