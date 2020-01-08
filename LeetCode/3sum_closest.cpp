class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res = INT_MAX, minSum = INT_MAX;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size()-2; i++) {
            int l = i+1;
            int r = nums.size()-1;
            while(l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == target)
                    return sum;
                if(abs(sum - target) < minSum) {
                    minSum = abs(sum - target);
                    res = sum;
                }
                if(sum > target)
                    r--;
                else
                    l++;
            }
        }
        
        return res;
    }
};