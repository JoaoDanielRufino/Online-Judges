int Solution::removeElement(vector<int> &A, int B) {
    int pos = 0;
    
    for(int i = 0; i < A.size(); i++) {
        if(A[i] != B) {
            A[pos++] = A[i];
        }
    }
    
    return pos;
}
