class Solution {
public:
    vector<string> res;
    set<string> hash;
    
    int misplacedChars(string s) {
        stack<char> st;
        
        for(int i = 0; i < s.size(); i++) {
            if(!st.empty()) {
                if(st.top() == '(' && s[i] == ')')
                    st.pop();
                else if(s[i] == '(' || s[i] == ')')
                    st.push(s[i]);
            }
            else if(s[i] == '(' || s[i] == ')')
                st.push(s[i]);
        }
        
        return st.size();
    }
    
    void solve(string s, int misplaced) {
        if(misplaced < 0)
            return;
        
        if(!misplaced) {
            if(!misplacedChars(s))
                res.push_back(s);
            return;
        }
        
        for(int i = 0;  i < s.size(); i++) {
            string sub = s.substr(0, i) + s.substr(i+1);
            if(!hash.count(sub)) {
                hash.insert(sub);
                solve(sub, misplaced-1);
            }
        }
    }
    
    vector<string> removeInvalidParentheses(string s) {
        int misplaced = misplacedChars(s);
        solve(s, misplaced);
        
        return res;
    }
};
