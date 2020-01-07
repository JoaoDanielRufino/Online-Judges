int Solution::bulbs(vector<int> &A) {
    int count = 0;
    bool flag = false;
    
    for(int i = 0; i < A.size(); i++) {
        if(flag)
            A[i] = A[i] ^ 1;
        if(!A[i]) {
            count++;
            flag = !flag;
        }
    }
    
    return count;
}
