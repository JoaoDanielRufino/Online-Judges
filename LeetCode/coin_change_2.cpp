class Solution {
public:
    int dp[5001][501];
    
    int solve(int sum, vector<int> &coins, int index) {
        if(sum < 0 || index >= coins.size())
            return 0;
        
        if(!sum)
            return 1;
        
        if(dp[sum][index] != -1)
            return dp[sum][index];
        
        return dp[sum][index] = solve(sum - coins[index], coins, index) + solve(sum, coins, index + 1);
    }
    
    int change(int amount, vector<int>& coins) {
        if(!amount)
            return 1;
        
        for(int i = 0; i <= amount; i++) {
            for(int j = 0; j < coins.size(); j++) {
                dp[i][j] = -1;
            }
        }
        
        return solve(amount, coins, 0);
    }
};