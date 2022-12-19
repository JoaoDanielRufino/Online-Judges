class Solution {
public:
    bool stuck(vector<vector<int>>& grid, int i, int j) {
        if(grid[i][j] == -1 && !j)
            return true;

        if(grid[i][j] == 1 && j == grid[i].size() - 1)
            return true;

        if(grid[i][j] == 1 && grid[i][j+1] == -1)
            return true;

        if(grid[i][j] == -1 && grid[i][j-1] == 1)
            return true;

        return false;
    }

    int solve(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& dp) {
        if(i == grid.size())
            return j;

        if(stuck(grid, i, j))
            return -1;

        if(dp[i][j] != -2)
            return dp[i][j];

        if(grid[i][j] == -1) 
            return dp[i][j] = solve(grid, i + 1, j - 1, dp);

        return dp[i][j] = solve(grid, i + 1, j + 1, dp);
    }

    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> ans;
        vector<vector<int>> dp(grid.size(), vector<int> (grid[0].size(), -2));

        for(int i = 0; i < grid[0].size(); i++) {
            ans.push_back(solve(grid, 0, i, dp));
        }

        return ans;
    }
};
