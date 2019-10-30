vector< vector<int> > res;
set< vector<int> > myset;

void solve(vector<int> A, vector<int> curr, int start) {
    if(!myset.count(curr)) {
        res.push_back(curr);
        myset.insert(curr);
    }
    
    for(int i = start; i < A.size(); i++) {
        curr.push_back(A[i]);
        solve(A, curr, i + 1);
        curr.pop_back();
    }
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    vector<int> curr;
    
    sort(A.begin(), A.end());
    
    res.clear();
    myset.clear();
    
    solve(A, curr, 0);
    
    return res;
}
