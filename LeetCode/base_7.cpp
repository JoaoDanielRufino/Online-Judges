class Solution {
public:
    string convertToBase7(int num) {
        if(!num)
            return "0";
        
        string res;
        bool negative = false;
        
        if(num < 0) {
            negative = true;
            num *= -1;
        }
        
        while(num != 0) {
            res += (num % 7) + '0';
            num /= 7;
        }
        
        if(negative)
            res += "-";
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};
