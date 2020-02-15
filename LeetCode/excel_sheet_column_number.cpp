class Solution {
public:
    int titleToNumber(string s) {
        int res = 0, j = 0;
        
        for(int i = s.size()-1; i >= 0; i--) {
            int tmp = (s[i] - 'A') + 1;
            res += tmp * pow(26, j++);
        }
        
        return res;
    }
};