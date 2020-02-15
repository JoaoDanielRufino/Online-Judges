class Solution {
public:
    static bool myCompare(const pair<int,string> a, const pair<int,string> b) {
        if(a.first > b.first)
            return true;
        if(a.first == b.first)
            return a.second < b.second;
        return false;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        
        for(string s : words)
            mp[s]++;
        
        vector< pair<int,string> > vet;
        for(auto it = mp.begin(); it != mp.end(); it++)
            vet.push_back(make_pair(it->second, it->first));
        
        sort(vet.begin(), vet.end(), myCompare);
        
        vector<string> res;
        for(int i = 0; i < k; i++)
            res.push_back(vet[i].second);
        
        return res;
    }
};