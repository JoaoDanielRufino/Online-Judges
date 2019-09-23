string Solution::longestCommonPrefix(vector<string> &A) {
    if(A.size() == 1)
        return A[0];
    
    string res;
    
    int i = 0;
    int j = 0;
    while(j < A[i].size()) {
        if(!i) {
            res += A[i++][j++];
        }
        if(A[i].substr(0, j) != res)
            return res.substr(0, j-1);
        i = (i + 1) % A.size();
    }
    
    return res;
}
