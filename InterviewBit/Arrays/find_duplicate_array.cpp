int Solution::repeatedNumber(const vector<int> &A) {
    vector<bool> vet(A.size(), false);
    
    for(int i = 0; i < A.size(); i++) {
        if(!vet[A[i]])
            vet[A[i]] = true;
        else
            return A[i];
    }
}
