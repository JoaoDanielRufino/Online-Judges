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
        
        for(int i = start; i < candidates.size(); i++) {
            if(i > start && candidates[i] == candidates[i-1])
                continue;
            current.push_back(candidates[i]);
            solve(candidates, i+1, current, s + candidates[i], target); // i+1 because we cant use the same number twice
            current.pop_back();               
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> current;
        
        sort(candidates.begin(), candidates.end());
        
        solve(candidates, 0, current, 0, target);
        
        return res;
    }
};