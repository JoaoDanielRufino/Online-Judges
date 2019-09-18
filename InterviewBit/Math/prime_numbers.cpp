vector<int> Solution::sieve(int A) {
    vector<int> primes(A+1, 1);
    vector<int> res;
    
    primes[0] = 0;
    primes[1] = 0;
    
    int root = sqrt(A);
    for(int i = 2; i <= root; i++) {
        if(primes[i]) {
            for(int j = i*i; j <= A; j += i)
                primes[j] = 0;
        }
    }
    
    for(int i = 0; i < primes.size(); i++) {
        if(primes[i])
            res.push_back(i);
    }
    
    return res;
}