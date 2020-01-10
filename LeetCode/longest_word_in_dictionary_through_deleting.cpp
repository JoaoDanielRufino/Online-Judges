class Solution {
public:
    bool isSubseq(string s, string t) {
        int j = 0;
        for(char c : s) {
            if(c == t[j])
                j++;
        }
        
        return j == t.size();
    }
    
    string findLongestWord(string s, vector<string>& d) {
        string res;
        
        for(string word : d) {
            if(isSubseq(s, word)) {
                if(word.size() > res.size())
                    res = word;
                else if(word.size() == res.size() && word < res)
                    res = word;
            }
        }
        
        return res;
    }
};