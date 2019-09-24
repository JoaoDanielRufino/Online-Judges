class Solution {
public:
    int reverse(int x) {
        int res = 0;
        bool flag = false;       
        
        if(x == INT_MAX || x == INT_MIN)
            return 0;
        
        if(x < 0) {
            x *= -1;
            flag = true;
        }
        
        while(x > 0) {
            if(res > INT_MAX/10 || (res == INT_MAX/10 && x%10 > 7))
                return 0;
            if(res < INT_MIN/10 || (res == INT_MIN/10 && x%10 < -8))
                return 0;
            res = (res*10 + x%10);
            x /= 10;
        }
        
        if(!flag)
            return res;
        return res*-1;
    }
};