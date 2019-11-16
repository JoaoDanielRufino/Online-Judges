class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxVal, minVal, res;
        
        maxVal = minVal = res = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < 0)
                swap(maxVal, minVal);
            
            maxVal = max(nums[i], maxVal * nums[i]);
            minVal = min(nums[i], minVal * nums[i]);
            
            res = max(res, maxVal);
        }
        
        return res;
    }
};