class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        map<int, int> mp;
        
        for(int x : nums) {
            int a = pow(x, 2);
            mp[a]++;
        }
        
        vector<int> res;
        for(auto it : mp) {
            int size = it.second;
            while(size--) {
                res.push_back(it.first);
            }
        }
        
        return res;
    }
};
