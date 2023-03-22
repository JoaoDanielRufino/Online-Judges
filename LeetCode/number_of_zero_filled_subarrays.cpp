class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int count = 0LL, ans = 0LL;

        for(int num : nums) {
            if(!num) {
                count++;
                ans += count;
            } else {
                count = 0LL;
            }
        }

        return ans;
    }
};
