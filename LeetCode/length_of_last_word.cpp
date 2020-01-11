class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        bool flag = false;
        
        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i] == ' ' && flag)
                break;
            if(flag)
                len++;
            else if(s[i] != ' ') {
                len++;
                flag = true;
            }
        }
        
        return len;
    }
};