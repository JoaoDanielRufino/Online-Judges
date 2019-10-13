int Solution::singleNumber(const vector<int> &A) {
    int ones = 0, twos = 0, bitmask;
    
    for(int i = 0; i < A.size(); i++) {
        twos |= (ones & A[i]);
        ones ^= A[i];
        bitmask = ~(ones & twos);
        ones &= bitmask;
        twos &= bitmask;
    }
    
    return ones;
}
