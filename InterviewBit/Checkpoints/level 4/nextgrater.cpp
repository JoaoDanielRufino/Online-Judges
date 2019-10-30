vector<int> Solution::nextGreater(vector<int> &A) {
    bool flag;
    vector<int> vet;
    
    if(A.size() == 1) {
        vet.push_back(-1);
        return vet;
    }
    
    for(int i = 0; i < A.size()-1; i++) {
        flag = false;
        for(int j = i+1; j < A.size(); j++) {
            if(A[j] > A[i]) {
                vet.push_back(A[j]);
                flag = true;
                break;
            }
        }
        if(!flag)
            vet.push_back(-1);
    }
    
    vet.push_back(-1);
    
    return vet;
}
