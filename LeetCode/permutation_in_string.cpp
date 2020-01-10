class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;
        
        map<char, int> hash;
        unordered_set<char> aux;
        
        for(int i = 0; i < s1.size(); i++) {
            hash[s1[i]]++;
            hash[s2[i]]--;
            aux.insert(s1[i]);
        }
        
        int l = 0;
        int r = s1.size()-1;
        while(r < s2.size()) {
            bool ok = true;
            for(auto it : hash) {
                if(it.second && aux.count(it.first)) {                   
                    ok = false;
                    break;
                }
            }
            
            if(ok)
                return true;
            
            hash[s2[l]]++;
            l++;
            r++;
            if(r >= s2.size())
                break;
            hash[s2[r]]--;
        }
        
        return false;
    }
};