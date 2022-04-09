class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int ans, l, r, mid;
    
        l = 0;
        r = x;
        while(l <= r) {
            mid = l + (r - l)/2;
            if(mid * mid <= x) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        
        return ans;  
    }
};
