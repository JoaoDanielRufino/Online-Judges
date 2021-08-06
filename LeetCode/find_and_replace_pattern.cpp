class Solution {
public:
    string normaliseString(string& s) {
        string res;
        unordered_map<char, char> mp;
        char aux = 'a';
        
        for(char c : s) {
            if(!mp.count(c))
                mp[c] = aux++;
        }
        
        for(char c : s) {
            res += mp[c];
        }
        
        return res;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        
        string normalisedPattern = normaliseString(pattern);
        for(string word : words) {
            if(normaliseString(word) == normalisedPattern)
                res.push_back(word);
        }
       
        return res;
    }
};
