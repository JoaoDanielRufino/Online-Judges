vector< vector<int> > res;

void my_permute(vector<int> A, int l) {
    if(l == A.size())
        res.push_back(A);
    
    for(int i = l; i < A.size(); i++) {
        swap(A[i], A[l]);
        my_permute(A, l+1);
        swap(A[i], A[l]);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    res.clear();
    
    my_permute(A, 0);
    
    return res;
}
