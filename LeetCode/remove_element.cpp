class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int aux = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val)
                nums[aux++] = nums[i];
        }
        
        return aux;
    }
};