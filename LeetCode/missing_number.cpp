class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = (n * (n+1)) / 2;
        int totalArray = accumulate(nums.begin(), nums.end(), 0);
        
        return total - totalArray;
    }
};