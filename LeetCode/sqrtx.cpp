class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x;
        unsigned long int mid;
        
        while(l <= r) {
            mid = l + (r - l) / 2;
            
            if(mid * mid == x)
                return mid;
            if(mid * mid > x)
                r = mid-1;
            else
                l = mid+1;
        }
        
        return r;
    }
};