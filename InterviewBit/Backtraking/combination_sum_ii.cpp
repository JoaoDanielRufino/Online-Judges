vector< vector<int> > res;
set< vector<int> > myset;

void solve(vector<int> A, vector<int> curr, int B, int start) {
    if(B < 0)
        return;
        
    if(!B) {
        if(!myset.count(curr)) {
            res.push_back(curr);
            myset.insert(curr);
        }
        return;
    }
    
    for(int i = start; i < A.size(); i++) {
        curr.push_back(A[i]);
        solve(A, curr, B - A[i], i+1);
        curr.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<int> curr;
    
    sort(A.begin(), A.end());
    
    res.clear();
    myset.clear();
    
    solve(A, curr, B, 0);
    
    return res;
}
