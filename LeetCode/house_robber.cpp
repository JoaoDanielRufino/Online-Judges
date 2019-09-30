class Solution {
public:
    int dp[1000];
    
    int solve(vector<int>& nums, int i) {
       if(i >= nums.size())
           return 0;
        
        if(dp[i] != -1)
            return dp[i];
        
        return dp[i] = max(nums[i] + solve(nums, i+2), solve(nums, i+1));
    }
    
    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        
        return solve(nums, 0);
    }
};