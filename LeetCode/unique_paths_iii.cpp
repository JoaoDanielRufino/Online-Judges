class Solution {
public:
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    int res;
    
    bool OK(vector<vector<int>>& grid, int x, int y) {
        if(x >= grid.size() || x < 0 || y >= grid[0].size() || y < 0)
            return false;
        if(grid[x][y] == -1)
            return false;
        return true;
    }
    
    void solve(vector<vector<int>>& grid, int x, int y, int needToWalk) {
        needToWalk--;
        
        if(needToWalk < 0)
            return;
        if(grid[x][y] == 2) {
            if(!needToWalk)
                res++;
            return;
        }
        
        grid[x][y] = -1;
        for(int i = 0; i < 4; i++) {
            if(OK(grid, x + dx[i], y + dy[i]))
                solve(grid, x + dx[i], y + dy[i], needToWalk);
        }
        grid[x][y] = 0;
        
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int xStart = -1, yStart = -1;
        int xEnd = -1, yEnd = -1;
        int needToWalk = 0;
        
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                if(grid[i][j] == 1) {
                    xStart = i;
                    yStart = j;
                }
                else if(grid[i][j] == 2) {
                    xEnd = i;
                    yEnd = j;
                }
                if(grid[i][j] != -1)
                    needToWalk++;
            }
        }
        
        
        res = 0;
        
        solve(grid, xStart, yStart, needToWalk);
        
        return res;
    }
};