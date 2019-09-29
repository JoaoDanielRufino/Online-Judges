class Solution {
public:
    int dp[1000][10000];
    
    int solve(vector<int>& coins, int amount, int i) {
        if(i >= coins.size() || amount < 0)
            return 10101010;
        
        if(!amount)
            return 0;
        
        if(dp[i][amount] != -1)
            return dp[i][amount];
        
        return dp[i][amount] = min(1 + solve(coins, amount-coins[i], i), solve(coins, amount, i+1));
    }
    
    int coinChange(vector<int>& coins, int amount) {
        //memset(dp, -1, sizeof(dp));
        
        for(int i = 0; i < coins.size(); i++) {
            for(int j = 0; j <= amount; j++) {
                dp[i][j] = -1;
            }
        }
        
        int res = solve(coins, amount, 0);
        
        if(res == 10101010)
            return -1;
        
        return res;
    }
};