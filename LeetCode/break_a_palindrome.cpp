class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.size() == 1)
            return "";
        
        int i = 0;
        while(i < palindrome.size() && palindrome[i] == 'a')
            i++;
        
        if(palindrome.size() & 1) {
            if(i == palindrome.size() / 2) {
                palindrome[palindrome.size()-1] = 'b';
                return palindrome;
            }
        }
        
        if(i == palindrome.size())
            palindrome[i-1] = 'b';
        else
            palindrome[i] = 'a';
        
        return palindrome;
    }
};