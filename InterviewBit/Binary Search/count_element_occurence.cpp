int Solution::findCount(const vector<int> &A, int B) {
    int l = 0, r = A.size()-1, mid;
    
    while(l <= r) {
        mid = r + (l - r) / 2;
        
        if(A[mid] == B)
            break;
        else if(A[mid] > B)
            r = mid-1;
        else
            l = mid+1;
    }
    
    int count = 0;
    int i = mid;
    while(i >= 0 && A[i--] == B)
        count++;
        
    i = mid+1;
    while(i < A.size() && A[i++] == B)
        count++;
        
    return count;
}
