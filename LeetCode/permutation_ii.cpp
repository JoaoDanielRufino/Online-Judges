class Solution {
public:
    set< vector<int> > myset;
    vector< vector<int> > res;
    
    void permute(vector<int>& nums, int start) {
        if(start == nums.size()) {
            if(!myset.count(nums)) {
                myset.insert(nums);
                res.push_back(nums);
            }
            return;
        }
        
        for(int i = start; i < nums.size(); i++) {
            swap(nums[i], nums[start]);
            permute(nums, start+1);
            swap(nums[i], nums[start]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        permute(nums, 0); 
        return res;
    }
};