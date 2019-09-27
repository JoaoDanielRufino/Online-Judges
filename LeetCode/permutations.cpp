class Solution {
public:
    vector< vector<int> > res;
    
    void solve(vector<int>& nums, int start) {
        if(start == nums.size()) {
            res.push_back(nums);
            return;
        }
        
        for(int i = start; i < nums.size(); i++) {
            swap(nums[start], nums[i]);
            solve(nums, start+1);
            swap(nums[start], nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums, 0);
        
        return res;
    }
};