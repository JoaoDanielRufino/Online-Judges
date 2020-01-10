class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        
        unordered_map<char, int> hash;
        
        for(char c : s)
            hash[c]++;
        
        for(char c : t) {
            if(hash[c] > 0)
                hash[c]--;
            else
                return false;
        }
        
        return true;
    }
};