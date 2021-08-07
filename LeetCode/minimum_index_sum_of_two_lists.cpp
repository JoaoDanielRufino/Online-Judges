class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> mp;
        map<int, vector<string>> res;
        
        for(int i = 0; i < list1.size(); i++)
            mp[list1[i]] = i;
        
        for(int i = 0; i < list2.size(); i++)  {
            if(mp.count(list2[i])) {
                int indexSum = mp[list2[i]] + i;
                res[indexSum].push_back(list2[i]);
            }
        }
        
        return res.begin()->second;
    }
};
