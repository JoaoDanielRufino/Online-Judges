class Solution {
public:
    vector< vector<int> > res;
    
    void solve(vector<int>& candidates, int start, vector<int> current, int s, int target) {
        if(s > target)
            return;
        
        if(s == target) {
            res.push_back(current);
            return;
        }
        
        for(int i = start; i < candidates.size(); i++) { // Define the start point, excluding the ones already picked
            current.push_back(candidates[i]);
            solve(candidates, i, current, s + candidates[i], target);
            current.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        
        solve(candidates, 0, current, 0, target);
        
        return res;
    }
};