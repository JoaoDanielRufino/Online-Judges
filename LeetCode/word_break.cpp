class Solution {
public:
    unordered_map<string, bool> dp;
    
    bool solve(string s, unordered_set<string> dict) {
        if(!s.size())
            return true;
        
        if(dp.count(s))
            return dp[s];
        
        for(int i = 1; i <= s.size(); i++) {
            if(dict.count(s.substr(0, i)) && solve(s.substr(i, s.size()), dict))
                return dp[s.substr(i, s.size())] = true;
        }
        
        return dp[s] = false;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st;
        
        for(int i = 0; i < wordDict.size(); i++)
            st.insert(wordDict[i]);
        
        return solve(s, st);
    }
};