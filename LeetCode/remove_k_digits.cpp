class Solution {
public:
    string removeKdigits(string num, int k) {
        string res;
        
        for(char c : num) {
            while(k && res.size() && res.back() > c) {
                res.pop_back();
                k--;
            }
            if(res.size() || c != '0')
                res.push_back(c);
        }
        
        while(res.size() && k--)
            res.pop_back();
        
        return res == "" ? "0" : res;
    }
};
