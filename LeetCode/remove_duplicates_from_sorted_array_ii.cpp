class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size())
            return 0;
        
        int aux = 0, count = 1;
        nums[aux++] = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[aux-1] && count < 2) {
                nums[aux++] = nums[i];
                count++;
            }
            else if(nums[i] != nums[aux-1]) {
                nums[aux++] = nums[i];
                count = 1;
            }
        }
        
        return aux;
    }
};