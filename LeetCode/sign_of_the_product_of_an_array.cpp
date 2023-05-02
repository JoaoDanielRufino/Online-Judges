class Solution {
public:
    int arraySign(vector<int>& nums) {
        int countNegative = 0;
        bool zero = false;

        for(int x : nums) {
            if(!x) {
                zero = true;
                break;
            }
            if(x < 0)
                countNegative++;
        }

        if(zero)
            return 0;

        if(countNegative % 2 == 1)
            return -1;
            
        return 1;
    }
};
