class Solution {
public:
    void solve(vector<string> &vet, string res, int open, int close, int size) {
        if(res.size() == size * 2) {
            vet.push_back(res);
            return;
        }
        
        if(open < size)
            solve(vet, res + "(", open + 1, close, size);
        if(close < open)
            solve(vet, res + ")", open, close + 1, size);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> vet;
        
        solve(vet, "", 0, 0, n);
        
        return vet;
    }
};

/* Or this
class Solution {
public:
    vector<string> res;
    
    void solve(string str, int open, int close) {
        if(!open && !close) {
            res.push_back(str);
        }
        
        if(open)
            solve(str + '(', open-1, close);
        if(close > open)
            solve(str + ')', open, close-1);
    }
    
    vector<string> generateParenthesis(int n) {
        solve("", n, n);
        
        return res;
    }
};
*/
