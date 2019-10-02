int Solution::searchInsert(vector<int> &A, int B) {
    int l = 0, r = A.size()-1, mid;

    while(l <= r) {
        mid = r - l / 2;
        
        if(A[mid] == B)
            return mid;
        if(A[mid] > B)
            r = mid-1;
        else
            l = mid+1;
    }
    
    if(B > A[mid])
        return r+1;
    else
        return l;
}
