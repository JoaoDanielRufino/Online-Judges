class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int aux;
        vector<int> res;
        
        aux = binarySearch(nums, 0, nums.size()-1, target);
        if(aux == -1) {
            res.push_back(-1);
            res.push_back(-1);
        }
        else {
            int i = aux-1;
            while(i >= 0 && nums[i] == target)
                i--;
            
            res.push_back(i+1);
            
            i = aux+1;
            while(i < nums.size() && nums[i] == target)
                i++;
            
            res.push_back(i-1);
        }
        
        return res;
    }
    
    int binarySearch(vector<int> nums, int i, int j, int target) {
        if(i > j)
            return -1;
        int mid = (i + j)/2;
        if(nums[mid] == target)
            return mid;
        if(nums[mid] < target)
            return binarySearch(nums, mid+1, j, target);
        return binarySearch(nums, i, mid-1, target);
    }
    
};