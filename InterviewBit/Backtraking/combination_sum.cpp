vector< vector<int> > res;
set< vector<int> > myset;

void solve(vector<int> A, vector<int> curr, int B, int start) {
    if(B < 0)
        return;
    
    if(!B) {
        if(myset.count(curr))
            return;
        myset.insert(curr);
        res.push_back(curr);
        return;
    }
    
    for(int i = start; i < A.size(); i++) {
        curr.push_back(A[i]);
        solve(A, curr, B - A[i], i);
        curr.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<int> curr;
    
    res.clear();
    myset.clear();
    
    sort(A.begin(), A.end());
    
    solve(A, curr, B, 0);
    
    return res;
}
