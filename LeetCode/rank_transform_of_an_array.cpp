class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(!arr.size())
            return vector<int> ();
        
        vector<int> res;
        vector<int> aux(arr.begin(), arr.end());
        unordered_map<int, int> mp;
        
        sort(aux.begin(), aux.end());
        
        int prev = aux[0];
        int rank = 1;
        for(int x : aux) {
            if(x != prev)
                rank++;
            mp[x] = rank;
            prev = x;
        }
        
        for(int x : arr) {
            res.push_back(mp[x]);
        }
        
        return res;
    }
};
