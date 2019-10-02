int Solution::sqrt(int A) {
    if(!A)
        return 0;
    
    long long int l = 1, r = A, mid;
    
    while(l <= r) {
        mid = r + (l - r) / 2;
        if(mid * mid < A)
            l = mid+1;
        else if(mid * mid > A)
            r = mid-1;
        else if(mid * mid == A)
            return mid;
    }
    
    return l-1;
}
