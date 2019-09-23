int Solution::titleToNumber(string A) {
    int sum = 0, j = 0;
    
    for(int i = A.size()-1; i >= 0; i--) {
        int tmp = A[i] - 64;
        sum += pow(26, j++) * tmp;
    }
    
    return sum;
}
