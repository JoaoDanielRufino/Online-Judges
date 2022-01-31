class Solution {
public:
    vector<vector<int>> dp;
    
    void resetDP(int m, int n) {
        dp.assign(m+1, vector<int>());
        for(int i = 0; i < dp.size(); i++) {
            dp[i].assign(n+1, -1);
        }
    }
    
    bool solve(string& query, string& pattern, int i, int j) {
        if(i == query.size() && j == pattern.size())
            return true;
        
        if(i > query.size() || j > pattern.size())
            return false;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(query[i] == pattern[j])
            return dp[i][j] = solve(query, pattern, i+1, j+1);
        
        if(islower(query[i]))
            return dp[i][j] = solve(query, pattern, i+1, j);
        
        return dp[i][j] = false;
    }
    
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> res;
        
        for(string query : queries) {
            resetDP(query.size(), pattern.size());
            res.push_back(solve(query, pattern, 0, 0));
        }
        
        return res;
    }
};
