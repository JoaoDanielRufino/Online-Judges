class Solution {
public:
    bool ok(string s, string sub) {
        string aux = sub;
        while(aux.size() < s.size()) {
            aux += sub;
        }
        
        return aux == s;
    }
    
    bool repeatedSubstringPattern(string s) {      
        string aux;
        for(int i = 0; i < s.size() / 2; i++) {
            aux += s[i];
            
            if(aux == s)
                return false;
            
            if(!(s.size() % aux.size())) {
                if(ok(s, aux)) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
