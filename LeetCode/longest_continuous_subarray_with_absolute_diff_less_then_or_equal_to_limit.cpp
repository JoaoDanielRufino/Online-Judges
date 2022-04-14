class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int pos = 0;
        multiset<int> ms;
        
        for(int i = 0; i < nums.size(); i++) {
            ms.insert(nums[i]);
            if(*ms.rbegin() - *ms.begin() > limit)
                ms.erase(ms.find(nums[pos++]));
        }
        
        return nums.size() - pos;
    }
};
