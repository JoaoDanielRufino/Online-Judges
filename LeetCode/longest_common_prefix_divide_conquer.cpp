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
        if(l == r)
            return vet[l];
        
        int mid = l + (r - l) / 2;
        string s = solve(vet, l, mid);
        string p = solve(vet, mid+1, r);
        return lcp(s, p);
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        if(!strs.size())
            return "";
        
        return solve(strs, 0, strs.size()-1);
    }
};