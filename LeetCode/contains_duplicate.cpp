class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        
        for(int x : nums) {
            if(hash.count(x))
                return true;
            hash.insert(x);
        }
        
        return false;
    }
};