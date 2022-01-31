class Solution {
public:
    int count(vector<int>& nums, int val) {
        int count = 0;
        
        for(int x : nums) {
            if(x >= val)
                break;
            count++;
        }
        
        return count;
    }
    
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        vector<int> aux(nums.begin(), nums.end());
        
        sort(aux.begin(), aux.end());
        
        for(int i = 0; i < nums.size(); i++) {
            res.push_back(count(aux, nums[i]));
        }
        
        return res;
    }
};
