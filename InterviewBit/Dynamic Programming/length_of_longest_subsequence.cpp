int Solution::longestSubsequenceLength(const vector<int> &A) {
    if(!A.size())
        return 0;
    
    int lis[A.size()], lds[A.size()];
    
    for(int i = 0; i < A.size(); i++) {
        lis[i] = 1;
        for(int j = 0; j < i; j++) {
            if(A[i] > A[j])
                lis[i] = max(lis[i], lis[j] + 1);
        }
    }
    
    for(int i = A.size()-1; i >= 0; i--) {
        lds[i] = 1;
        for(int j = A.size()-1; j > i; j--) {
            if(A[i] > A[j])
                lds[i] = max(lds[i], lds[j] + 1);
        }
    }
    
    int res = INT_MIN;
    for(int i = 0; i < A.size(); i++)
        res = max(res, lis[i] + lds[i] - 1);
    
    return res;
}
