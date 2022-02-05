class Solution {
public:
    vector<string> res;
    
    void solve(string curr, int n) {
        if(curr.size() == n) {
            res.push_back(curr);
            return;
        }
        
        for(char c = 'a'; c <= 'c'; c++) {
            if(curr.back() == c)
                continue;
            solve(curr + c, n);
        }
    }
    
    string getHappyString(int n, int k) {
        solve("", n);
        
        return k > res.size() ? "" : res[k-1];
    }
};
