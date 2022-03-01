class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        unordered_map<string, int> mp;
        int res = 0;
        
        mp["--X"] = mp["X--"] = -1;
        mp["++X"] = mp["X++"] = 1;
        
        for(string op : operations) {
            res += mp[op];
        }
        
        return res;
    }
};
