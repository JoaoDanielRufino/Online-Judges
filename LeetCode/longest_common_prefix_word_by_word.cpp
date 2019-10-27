class Solution {
public:
    string lcp(string s, string p) {
        int i, j;
        string prefix;
        
        i = j = 0;
        while(i < s.size() && j < p.size() && s[i] == p[j]) {
            prefix += s[i];
            i++;
            j++;
        }
        
        return prefix;
    }
    
    string solve(vector<string> vet, int l, int r) {
        string prefix = vet[0];
        
        for(int i = 1; i < vet.size(); i++) {
            prefix = lcp(prefix, vet[i]);
        }
        
        return prefix;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        if(!strs.size())
            return "";
        
        return solve(strs, 0, strs.size()-1);
    }
};