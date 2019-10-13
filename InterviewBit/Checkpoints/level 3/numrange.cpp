int solve(vector<int> A, int val) {
    int start = 0, end = 0, count = 0, sum = A[0];
    
    while(start < A.size() && end < A.size()) {
        if(sum <= val) {
            end++;
            if(end >= start)
                count += end - start;
            if(end < A.size())
                sum += A[end];
        }
        else {
            sum -= A[start];
            start++;
        }
    }
    
    return count;
}

int Solution::numRange(vector<int> &A, int B, int C) {
    return solve(A, C) - solve(A, B-1);
}
