int Solution::maxSubArray(const vector<int> &A) {
    int maxSum, currentSum;
    
    maxSum = currentSum = A[0];
    for(int i = 1; i < A.size(); i++) {
        currentSum = max(A[i], currentSum + A[i]);
        maxSum = max(maxSum, currentSum);
    }
    
    return maxSum;
}
