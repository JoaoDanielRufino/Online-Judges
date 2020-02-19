class Solution {
public:
    int solve(vector<int> nums) {
        int res = 0, a = 0, b = 0;
        
        for(int x : nums) {
            res = max(a, b + x);
            b = a;
            a = res;
        }
        
        return res;
    }
    
    int rob(vector<int>& nums) {
        if(!nums.size())
            return 0;
        
        if(nums.size() == 1)
            return nums[0];
        
        int a = solve(vector<int>(nums.begin()+1, nums.end()));
        int b = solve(vector<int>(nums.begin(), nums.end()-1));
        
        return max(a, b);
    }
};