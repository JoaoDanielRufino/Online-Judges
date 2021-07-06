int solve(int sum, int index, vector<int> arr) {
    if(index >= arr.size())
        return sum;
    
    return max(solve(sum + arr[index], index+2, arr), solve(sum, index+1, arr));
}

int maxSubsetSum(vector<int> arr) {
    vector<int> dp(arr.size()+3);
    
    // return solve(0, 0, arr);
    
    for(int i = arr.size()-1; i >= 0; i--) {
        dp[i] = max(arr[i] + dp[i+2], dp[i+1]);
    }
    
    return dp[0];
}
