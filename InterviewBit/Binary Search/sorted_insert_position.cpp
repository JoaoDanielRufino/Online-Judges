int Solution::searchInsert(vector<int> &A, int B) {
    int l = 0, r = A.size()-1, mid, res;

    while(l <= r) {
        mid = (r + l) / 2;
        
        if(A[mid] == B)
            return mid;
        if(A[mid] > B) {
            res = mid;
            r = mid-1;
        }
        else {
            res = mid+1;
            l = mid+1;
        }
    }
    
    return res;
}
