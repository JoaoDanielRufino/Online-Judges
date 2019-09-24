class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size())
            return 0;
        int aux = 0, prev = -1;
        nums[aux++] = nums[0];
        for(int i = 1; i < nums.size(); i++) {
           if(nums[i] != nums[aux-1]) {
               nums[aux++] = nums[i];
           }
        }
        return aux;
    }
};