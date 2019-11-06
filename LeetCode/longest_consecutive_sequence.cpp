class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size())
            return 0;
            
        int res = 0;
        unordered_set<long int> s;

        for(int i = 0; i < nums.size(); i++)
            s.insert(nums[i]);

        for(int i = 0; i < nums.size(); i++) {
            if(!s.count(nums[i]-1)) {
                long int tmp = nums[i];
                int len = 1;
                while(s.count(++tmp)) {
                    len++;
                }
                res = max(res, len);
            }
        }

        return res;
    }
};