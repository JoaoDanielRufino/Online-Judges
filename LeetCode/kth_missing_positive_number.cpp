class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<bool> nums(1001 + k);

        for(int x : arr) {
            nums[x] = true;
        }

        int i = 1;
        while(i < nums.size()) {
            if(!nums[i])
                k--;
            if(!k)
                break;
            i++;
        }

        return i;
    }
};
