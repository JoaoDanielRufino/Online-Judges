class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res;
        map<int, int> mp;
        
        for(int x : arr1) {
            mp[x]++;
        }
        
        for(int x : arr2) {
            while(mp[x]--) {
                res.push_back(x);
            }
            mp.erase(x);
        }
        
        for(auto it = mp.begin();  it != mp.end(); it++) {
            int count = it->second;
            while(count--) {
                res.push_back(it->first);
            }
        }
        
        return res;
    }
};
