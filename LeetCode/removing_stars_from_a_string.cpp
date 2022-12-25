class Solution {
public:
    string removeStars(string s) {
        string ans;
        
        for(char c : s) {
            if(c == '*') {
                ans.pop_back();
            } else {
                ans += c;
            }
        }

        return ans;
    }
};
