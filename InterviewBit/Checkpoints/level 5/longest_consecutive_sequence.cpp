int Solution::longestConsecutive(const vector<int> &A) {
    int res = 0;
    unordered_set<long int> s;
    
    for(int i = 0; i < A.size(); i++)
        s.insert(A[i]);
        
    for(int i = 0; i < A.size(); i++) {
        if(!s.count(A[i]-1)) {
            long int tmp = A[i];
            int len = 1;
            while(s.count(++tmp)) {
                len++;
            }
            res = max(res, len);
        }
    }
    
    return res;
}
