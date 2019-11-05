class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> colors(3, 0);
        
        for(int i = 0; i < nums.size(); i++) {
            colors[nums[i]]++;
        }
        
        int j = 0;
        for(int i = 0; i < 3; i++) {
            while(colors[i]--)
                nums[j++] = i;
        }
    }
};