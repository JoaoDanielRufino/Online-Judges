class Solution {
public:
    int solve(vector<int>& satisfaction, int dish, int time, vector<vector<int>>& dp) {
        if(dish >= satisfaction.size())
            return 0;

        if(dp[dish][time] != -1 )
            return dp[dish][time]; 

        return dp[dish][time] = max(solve(satisfaction, dish + 1, time, dp), (satisfaction[dish] * time) + solve(satisfaction, dish + 1, time + 1, dp));
    }

    int maxSatisfaction(vector<int>& satisfaction) {
        vector<vector<int>> dp(satisfaction.size(), vector<int> (satisfaction.size()+1, -1));

        sort(satisfaction.begin(), satisfaction.end());

        return solve(satisfaction, 0, 1, dp); 
    }
};
