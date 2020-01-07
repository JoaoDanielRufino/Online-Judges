int Solution::maxp3(vector<int> &A) {
    sort(A.begin(), A.end());
    
    int n = A.size();
    
    // max1 * max2 * max3 or max1 * min1 * min1
    return max(A[n-1] * A[n-2] * A[n-3], A[n-1] * A[0] * A[1]);
}
