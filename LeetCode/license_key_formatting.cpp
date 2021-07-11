class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int size = 0;
        string res;
        
        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i] != '-') {
                if(size < k) {
                    res += toupper(s[i]);
                    size++;
                } else {
                    res += '-';
                    res += toupper(s[i]);
                    size = 1;
                }
            }
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};
