class Solution {
public:
    int longestPalindrome(string s) {
        int res = 0;
        vector<int> hash(128, 0);
        bool flag = false;
        
        for(char c : s)
            hash[c]++;
        
        for(int n : hash) {
            if(!(n & 1))
                res += n;
            else {
                res += n - 1;
                flag = true;
            }
        }
        
        res += flag;
        return res;
    }
};