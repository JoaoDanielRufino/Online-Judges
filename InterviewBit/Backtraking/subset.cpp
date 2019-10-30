vector< vector<int> > res;

void solve(vector<int> A, vector<int> curr, int start) {
    res.push_back(curr);
    
    for(int i = start; i < A.size(); i++) {
        curr.push_back(A[i]);
        solve(A, curr, i + 1);
        curr.pop_back();
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<int> curr;
    
    res.clear();
    
    sort(A.begin(), A.end());
    
    solve(A, curr, 0);
    
    return res;
}
