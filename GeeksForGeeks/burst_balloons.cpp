class Solution {
public:
    int solve(vector<int>& arr, int left, int right, vector<vector<int>>& dp) {
        if(left > right)
            return 0;
            
        if(left == right)
            return arr[left-1] * arr[left] * arr[right+1];
            
        if(dp[left][right] != -1)
            return dp[left][right];
        
        int ans = INT_MIN;
        for(int i = left; i <= right; i++) {
            int brust = arr[left-1] * arr[i] * arr[right+1];
            
            ans = max(ans, brust + solve(arr, left, i - 1, dp) + solve(arr, i + 1, right, dp));
        }
        
        return dp[left][right] = ans;
    }

    int maxCoins(int N, vector<int> &arr) {
        vector<int> aux;
        
        aux.push_back(1);
        for(int x : arr)
            aux.push_back(x);
        aux.push_back(1);
        
        vector<vector<int>> dp(N+1, vector<int> (N+1, -1));
        
        return solve(aux, 1, aux.size() - 2, dp);
    }
};
