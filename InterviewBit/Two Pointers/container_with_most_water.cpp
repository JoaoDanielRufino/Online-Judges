int Solution::maxArea(vector<int> &A) {
    int i = 0, j = A.size()-1;
    int maxSum = 0;
    
    while(i < j) {
        maxSum = max(maxSum, abs(i-j) * min(A[i], A[j]));
        if(A[i] < A[j])
            i++;
        else
            j--;
    }
    
    return maxSum;
}
