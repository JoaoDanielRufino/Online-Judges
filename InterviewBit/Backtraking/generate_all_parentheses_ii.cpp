vector<string> res;

void solve(string curr, int A, int open, int close) {
    if(curr.size() > A * 2)
        return;
    
    if(curr.size() == A * 2) {
        res.push_back(curr);
        return;
    }
    
    if(open < A)
        solve(curr + "(", A, open+1, close);
    if(open > close)
        solve(curr + ")", A, open, close+1);
        
}

vector<string> Solution::generateParenthesis(int A) {
    res.clear();
    
    solve("", A, 0, 0);
    
    return res;
}
