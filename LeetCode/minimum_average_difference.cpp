class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        vector<long long int> prefixSum;

        prefixSum.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++) {
            prefixSum.push_back(prefixSum[i-1] + nums[i]);
        }

        int minDiff = INT_MAX, ans = 0;;
        int lastPos = nums.size() - 1, secondSize = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++) {
            int firstAvg = prefixSum[i] / (i + 1);

            int secondAvg = 0;
            if(secondSize > 0) {
                secondAvg = (prefixSum[lastPos] - prefixSum[i]) / secondSize;
            }

            int avg = abs(firstAvg - secondAvg);
            if(avg < minDiff) {
                minDiff = avg;
                ans = i;
            }

            secondSize--;
        }

        return ans;
    }
};
