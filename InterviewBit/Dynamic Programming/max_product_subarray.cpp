int Solution::maxProduct(const vector<int> &A) {
    int minVal, maxVal, res;
    
    minVal = maxVal = res = A[0];
    for(int i = 1; i < A.size(); i++) {
        if(A[i] < 0)
            swap(minVal, maxVal);
            
        maxVal = max(A[i], A[i] * maxVal);
        minVal = min(A[i], A[i] * minVal);
        
        res = max(res, maxVal);
    }
    
    return res;
}
