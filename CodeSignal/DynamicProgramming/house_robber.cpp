int solve(vector<int>& nums, int index, vector<int>& dp) {
    if(index >= nums.size())
        return 0;
        
    if(dp[index] != -1)
        return dp[index];
        
    return dp[index] = max(nums[index] + solve(nums, index + 2, dp), solve(nums, index + 1, dp));
}

int solution(vector<int> nums) {
    vector<int> dp(nums.size(), -1);
    
    return solve(nums, 0, dp);
}
