int Solution::strStr(const string A, const string B) {
    int j, k;
    
    for(int i = 0; i < A.size(); i++) {
        j = 0;
        k = i;
        while(A[k++] == B[j++] && k < A.size() && j < B.size());
        if(j == B.size() && A[k-1] == B[j-1])
            return i;
    }
    
    return -1;
}
