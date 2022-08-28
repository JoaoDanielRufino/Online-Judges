class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        
        int size = nums.size() * 2;
        for(int i = 0; i < size; i++) {
            ans.push_back(nums[i % nums.size()]);
        }
        
        return ans;
    }
};
