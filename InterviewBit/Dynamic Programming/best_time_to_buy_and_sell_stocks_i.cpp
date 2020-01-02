int Solution::maxProfit(const vector<int> &A) {
    if(!A.size())
        return 0;
    
    int res = 0, minNum = A[0];
    
    for(int i = 1; i < A.size(); i++) {
        minNum = min(minNum, A[i]);
        res = max(res, A[i] - minNum);
    }
    
    return res;
}
