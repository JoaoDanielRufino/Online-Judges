int Solution::isPrime(int A) {
    if(A == 1)
        return 0;
    
    int root = sqrt(A);
    for(int i = 2; i <= root; i++) {
        if(!(A % i))
            return 0;
    }
    
    return 1;
}
