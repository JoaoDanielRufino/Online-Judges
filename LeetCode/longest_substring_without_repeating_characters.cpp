// Solution 1
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> hash;
        int res = 0;
        int i, j;
        
        i = j = 0;
        while(j < s.size()) {
            if(!hash.count(s[j])) {
                hash.insert(s[j++]);
                res = max(res, j - i);
            }
            else
                hash.erase(s[i++]);
        }
        
        return res;
    }
};

// Solution 2
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, pair<bool,int> > seen;
        int max = 0, i = 0;
        for(int j = 0; j < s.size(); j++) {
            if(seen[s[j]].first) {
                max = max > j-i ? max : j-i;
                i = i > seen[s[j]].second+1 ? i : seen[s[j]].second+1;
                //seen.clear();
            }
            seen[s[j]] = make_pair(true,j);
        }
        if(i < s.size()-1){
          max = max > s.size()-i ? max : (s.size()-i);
        }
        else{
          max = max > 1 ? max : 1;
        }
        
        return max;
    }
};