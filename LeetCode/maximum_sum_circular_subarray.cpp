class Solution {
public:
    int maxSumArray(vector<int>& nums) {
        int currSum = nums[0];
        int maxSum = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            currSum = max(nums[i], currSum + nums[i]);
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }

    int minSumArray(vector<int>& nums) {
        int currSum = nums[0];
        int minSum = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            currSum = min(nums[i], currSum + nums[i]);
            minSum = min(minSum, currSum);
        }

        return minSum;
    }

    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = 0;

        for(int x : nums) {
            totalSum += x;
        } 

        int maxSum = maxSumArray(nums);
        int minSum = minSumArray(nums);
        int diffSum = totalSum - minSum;

        if(!diffSum)
            return maxSum;

        return max(maxSum, diffSum);
    }
};
