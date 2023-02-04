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

// Easier
class Solution {
public:
    bool equal(vector<int>& a, vector<int>& b) {
        for(int i = 0; i < a.size(); i++) {
            if(a[i] != b[i])
                return false;
        }

        return true;
    }

    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;

        vector<int> mpA(26), mpB(26);

        for(int i = 0; i < s1.size(); i++) {
            mpA[s1[i] - 'a']++;
            mpB[s2[i] - 'a']++;
        }

        int l = 0;
        int r = s1.size() - 1;
        while(r < s2.size()) {
            if(equal(mpA, mpB))
                return true;

            mpB[s2[l] - 'a']--;

            l++;
            r++;

            if(r >= s2.size())
                break;

            mpB[s2[r] - 'a']++;
        }

        return false;
    }
};
