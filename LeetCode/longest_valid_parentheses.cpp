class Solution {
public:
    int longestValidParentheses(string s) {
        int left, right, maxLen;
        
        left = right = maxLen = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(')
                left++;
            else
                right++;
            if(right == left)
                maxLen = max(maxLen, 2 * right);
            else if(right > left)
                left = right = 0;
        }
        
        left = right = 0;
        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i] == '(')
                left++;
            else
                right++;
            if(right == left)
                maxLen = max(maxLen, 2 * right);
            else if(left > right)
                left = right = 0;
        }
        
        return maxLen;
    }
};