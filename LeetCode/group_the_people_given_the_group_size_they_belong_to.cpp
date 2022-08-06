class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>  res;
        map<int, vector<int>> mp;
        
        for(int i = 0; i < groupSizes.size(); i++) {
            mp[groupSizes[i]].push_back(i);
        }
        
        for(auto it = mp.begin(); it != mp.end(); it++) {
            vector<int> aux;
            for(int x : it->second) {
                aux.push_back(x);
                if(!(aux.size() % it->first)) {
                    res.push_back(aux);
                    aux.clear();
                }
            }
        }
        
        return res;
    }
};
