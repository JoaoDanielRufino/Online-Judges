class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x = 0, y = n;
        vector<int> ans;

        while(y < nums.size()) {
            ans.push_back(nums[x++]);
            ans.push_back(nums[y++]);
        }

        return ans;
    }
};
