vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int l, r, lower = -1, upper = -1;
    vector<int> res;
    
    l = 0;
    r = A.size()-1;
    while(l <= r) {
        int mid = l + (r - l)/2;
        if(A[mid] >= B) {
            lower = mid;
            r = mid-1;
        }
        else
            l = mid+1;
    }
    
    l = 0;
    r = A.size()-1;
    while(l <= r) {
       int mid = l + (r - l)/2;
        if(A[mid] <= B) {
            upper = mid;
            l = mid+1;
        }
        else
            r = mid-1; 
    }
    
    if(lower != -1 && upper != -1 && A[lower] == A[upper]) {
        res.push_back(lower);
        res.push_back(upper);
    }
    else {
        res.push_back(-1);
        res.push_back(-1);
    }
    return res;
}
