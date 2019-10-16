int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    if(!A.size() || !A[0].size())
        return 0;
    
    int l = 0, r = A.size()-1, mid = 0;
    
    while(l <= r) {
        mid = (l + r) / 2;
        
        if(A[mid][0] == B)
            return 1;
        if(A[mid][0] > B)
            r = mid-1;
        else
            l = mid+1;
    }
    
    int pos;
    if(mid > 0)
        pos = A[mid][0] > B ? mid-1 : mid;
    
    l = 0;
    r = A[pos].size()-1;
    
    while(l <= r) {
        mid = (l + r) / 2;
        
        if(A[pos][mid] == B)
            return 1;
        if(A[pos][mid] > B)
            r = mid-1;
        else
            l = mid+1;
    }
    
    return 0;
}
