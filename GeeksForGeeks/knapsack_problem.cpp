class Solution
{
    public:
    int dp[1001][1001];
    
    int solve(int W, int wt[], int val[], int n, int index) {
        if(index >= n)
            return 0;
        
        if(dp[W][index] != -1)
            return dp[W][index];
        
        int aux = 0;  
        if(W - wt[index] >= 0)
            aux = val[index] + solve(W - wt[index], wt, val, n, index+1);
            
        return dp[W][index] = max(solve(W, wt, val, n, index+1), aux);
    }
    
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        for(int i = 0; i <= W; i++) {
            for(int j = 0; j <= n; j++) {
                dp[i][j] = -1;
            }
        }
        
        return solve(W, wt, val, n, 0);
    }
};
