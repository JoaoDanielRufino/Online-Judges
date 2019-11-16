class Solution {
public:
    set< vector<int> > st;
    vector< vector<int> > res;
    
    void solve(vector<int> curr, int k, int n, int start) {
        if(curr.size() > k || n < 0)
            return;
        
        if(curr.size() == k && !n) {
            if(!st.count(curr)) {
                res.push_back(curr);
                st.insert(curr);
            }
            return;
        }
        
        for(int i = start; i <= 9; i++) {
            curr.push_back(i);
            solve(curr, k, n - i, i+1);
            curr.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {        
        solve(vector<int> (), k, n, 1);
        
        return res;
    }
};