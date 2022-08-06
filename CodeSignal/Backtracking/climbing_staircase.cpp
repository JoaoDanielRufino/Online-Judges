void solve(int n, int k, vector<int> curr, vector<vector<int>>& ans) {
    if(n < 0)
        return;
    
    if(!n) {
        ans.push_back(curr);
        return;
    }
    
    for(int i = 1; i <= k; i++) {
        curr.push_back(i);
        solve(n - i, k, curr, ans);
        curr.pop_back();
    }
}

vector<vector<int>> solution(int n, int k) {
    vector<vector<int>> ans;
    
    solve(n, k, vector<int>(), ans);
    
    return ans;
}
