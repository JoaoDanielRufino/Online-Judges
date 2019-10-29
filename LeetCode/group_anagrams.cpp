class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector< vector<string> > res(strs.size());
        map<vector<int>, int> mp;
        int count = 0;
        
        for(int i = 0; i < strs.size(); i++) {
            vector<int> aux(26);
            for(int j = 0; j < strs[i].size(); j++) {
                int index = strs[i][j] - 'a';
                aux[index]++;
            }
            if(mp.count(aux)) {
                res[mp[aux]].push_back(strs[i]);
            }
            else {
                mp[aux] = count;
                res[count].push_back(strs[i]);
                count++;
            }
        }
        
        res.resize(count);
        
        return res;
    }
};