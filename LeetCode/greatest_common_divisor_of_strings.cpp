class Solution {
public:
    bool ok(string a, string b, string sub) {
        string aux = sub;
        while(aux.size() < b.size()) {
            aux += sub;
        }
        
        if(aux == b) {
            while(aux.size() < a.size()) {
                aux += sub;
            }
        } else {
            return false;
        }
        
        return aux == a;
    }
    
    string solve(string a, string b, string curr) {
        if(!curr.size())
            return "";
        
        if(ok(a, b, curr))
            return curr;
        
        curr.pop_back();
        return solve(a, b, curr);
    }
    
    string gcdOfStrings(string str1, string str2) {
        if(str1.size() < str2.size())
            return solve(str2, str1, str1);
        return solve(str1, str2, str2);
    }
};
