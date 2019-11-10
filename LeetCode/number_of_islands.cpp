class Solution {
public:
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    int n;
    int m;
    vector< vector<bool> > seen;
    
    bool OK(vector<vector<char>>& grid, int x, int y) {
        if(x < 0 || x >= n)
            return false;
        
        if(y < 0 || y >= m)
            return false;
        
        if(seen[x][y] || grid[x][y] == '0')
            return false;
        
        return true;
    }
    
    void solve(vector<vector<char>>& grid, int x, int y) {
        seen[x][y] = true;
        
        for(int i = 0; i < 4; i++) {
            if(OK(grid, x + dx[i], y + dy[i]))
                solve(grid, x + dx[i], y + dy[i]);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        if(!grid.size())
            return 0;
        
        n = grid.size();
        m = grid[0].size();
        seen.assign(n, vector<bool> (m));
        
        int count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!seen[i][j] && grid[i][j] == '1') {
                    solve(grid, i, j);
                    count++;
                }
            }
        }
        
        return count;
    }
};