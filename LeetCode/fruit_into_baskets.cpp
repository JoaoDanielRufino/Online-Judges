class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int, int> mp;
        
        int l = 0, r = 0, res = INT_MIN;
        while(r < fruits.size()) {
            mp[fruits[r]]++;
            
            if(mp.size() <= 2) {
                int size = 0;
                for(auto it : mp) {
                    size += it.second;
                }
                res = max(res, size);
            } else {
                while(mp.size() > 2) {
                    mp[fruits[l]]--;
                    
                    if(!mp[fruits[l]])
                        mp.erase(fruits[l]);
                
                    l++;
                }
            }
            
            r++;
        }
        
        return res;
    }
};
