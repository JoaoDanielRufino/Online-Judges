int Solution::maximumGap(const vector<int> &A) {
    if(A.size() == 1)
        return 0;
    
    int maxDiff = -1;
    int *lMin = new int[A.size()];
    int *rMax = new int[A.size()];
    
    lMin[0] = A[0];
    for(int i = 1; i < A.size(); i++) {
        lMin[i] = min(A[i], lMin[i - 1]);
    }
    
    rMax[A.size() - 1] = A[A.size() - 1];
    for(int i = A.size() - 2; i >= 0; i--) {
        rMax[i] = max(A[i], rMax[i + 1]);
    }
    
    int i = 0, j = 0;
    while(i < A.size() && j < A.size()) {
        if(lMin[i] <= rMax[j]) {
            maxDiff = max(maxDiff, j - i);
            j++;
        }
        else {
            i++;
        }
    }
    
    return maxDiff;
}
