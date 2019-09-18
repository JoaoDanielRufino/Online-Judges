int Solution::reverse(int A) {
    bool flag = false;
    if(A < 0) {
        flag = true;
        A = A * -1;
    }
    
    long int res = 0;
    while(A > 0) {
        res = res * 10 + A%10;
        A /= 10;
    }
    
    if(res < INT_MIN || res > INT_MAX)
        return 0;
    
    return flag ? res * -1 : res;
}
