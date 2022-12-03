class Solution {
public:
    long long int mod = 1000000007;

    int solve(int sizeTarget, int zero, int one, vector<int>& dp) {
        if(sizeTarget < 0)
            return 0;

        if(!sizeTarget)
            return 1;

        if(dp[sizeTarget] != -1)
            return dp[sizeTarget];

        long long sum = solve(sizeTarget - zero, zero, one, dp) + solve(sizeTarget - one, zero, one, dp);
        return dp[sizeTarget] = sum % mod;
    }

    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high + 1, -1);
        int ans;

        for(int i = low; i <= high; i++) {
            ans = ((ans % mod) + (solve(i, zero, one, dp) % mod)) % mod;
        }

        return ans;
    }
};
