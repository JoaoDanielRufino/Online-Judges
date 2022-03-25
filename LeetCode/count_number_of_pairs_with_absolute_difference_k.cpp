class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int res = 0;
        
        for(int i = 0; i < nums.size()-1; i++) {
            for(int j = i+1; j < nums.size(); j++) {
                res += abs(nums[i] - nums[j]) == k;
            }
        }
        
        return res;
    }
};

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int res = 0;
        unordered_map<int, int> mp;
        
        for(int x : nums) {
            int tmp = x + k;
            int tmp2 = x - k;
            if(mp[tmp])
                res += mp[tmp];
            if(mp[tmp2])
                res += mp[tmp2];
            mp[x]++;
        }
        
        return res;
    }
};
