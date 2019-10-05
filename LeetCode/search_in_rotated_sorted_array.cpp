class Solution {
public:
    int bn(vector<int>& nums, int l, int r, int target) {
        if(l > r)
            return -1;
        
        int mid = (l + r) / 2;
        if(nums[mid] == target)
            return mid;
        
        if(nums[l] <= nums[mid]) {
            if(target >= nums[l] && target <= nums[mid])
                return bn(nums, l, mid-1, target);
            return bn(nums, mid+1, r, target);
        }
        
        if(target >= nums[mid] && target <= nums[r])
            return bn(nums, mid+1, r, target);
        return bn(nums, l, mid-1, target);
    }
    
    int search(vector<int>& nums, int target) {
        return bn(nums, 0, nums.size()-1, target);
    }
};