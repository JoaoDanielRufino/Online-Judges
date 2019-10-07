int Solution::removeDuplicates(vector<int> &A) {
    if(A.size() == 1)
        return 1;
        
    int pos = 1;
    
    for(int i = 1; i < A.size(); i++) {
        if(A[i] != A[i-1]) {
            A[pos++] = A[i];
        }    
    }
    
    return pos;
}
