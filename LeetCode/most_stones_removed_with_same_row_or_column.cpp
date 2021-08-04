class Solution {
public:
    vector<bool> seen;
    
    void solve(int curr, vector<vector<int>>& stones) {
        seen[curr] = true;
        
        for(int i = 0; i < stones.size(); i++) {
            if(!seen[i]) {
                if(stones[i][0] == stones[curr][0] || stones[i][1] == stones[curr][1])
                    solve(i, stones);
            }
        }
    }
    
    int removeStones(vector<vector<int>>& stones) {
        seen.assign(stones.size(), false);
        
        int count = 0;
        for(int i = 0; i < stones.size(); i++) {
            if(!seen[i]) {
                solve(i, stones);
                count++;
            }
        }
        
        return stones.size() - count;
    }
};
