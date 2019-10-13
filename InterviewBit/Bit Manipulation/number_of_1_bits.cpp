int Solution::numSetBits(unsigned int A) {
    unsigned long int x = 1;
    int count = 0;
    
    while(x <= A) {
        if(x & A)
            count++;
        x = x << 1;
    }
    
    return count;
}
