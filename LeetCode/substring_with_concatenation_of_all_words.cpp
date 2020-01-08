class Solution {
public:
    unordered_map<string, int> hash;
    unordered_map<string, int> aux;
    vector<int> res;
    
    void fillMap(vector<string>& words) {
        for(string s : words) {
            hash[s]++;
            aux[s]++;
        }
    }
    
    void solve(string s, int start, int len, int count) {
        for(int i = start; i < s.size(); i += len) {
            string sub = s.substr(i, len);
            if(hash[sub]) {
                count--;
                hash[sub]--;
            }
            else
                return;
            if(!count) {
                res.push_back(start);
                return;
            }
        }
    }
    
    vector<int> findSubstring(string s, vector<string>& words) {
        if(!words.size())
            return res;
        
        int len = words[0].size();
            
        fillMap(words);
        for(int i = 0; i < s.size(); i++) {
            string sub = s.substr(i, len);
            if(hash[sub]) {
                solve(s, i, len, words.size());
                hash = aux;
            }
        }
        
        return res;
    }
};