class Solution {
public:
    string reverseWords(string s) {
        stack<string> words;
        string aux;
        bool flag = false;
        
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != ' ')
                flag = true;
            if(flag) {
                if(s[i] == ' ') {
                    words.push(aux);
                    aux.clear();
                    flag = false;
                }
                else
                    aux += s[i];
            }
        }
        
        if(!aux.empty())
            words.push(aux);
        
        string res;
        while(!words.empty()) {
            res += words.top() + " ";
            words.pop();
        }
        
        res.pop_back();
        
        return res;
    }
};