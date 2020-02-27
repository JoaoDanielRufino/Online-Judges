class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0, pos = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(!nums[i])
                count++;
            else
                nums[pos++] = nums[i];
        }
        
        while(count--)
            nums[pos++] = 0;
    }
};