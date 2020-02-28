class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> hash;
        
        for(int n : nums)
            hash[n]++;
        
        int res = 0;
        for(int n : nums) {
            if(hash.count(n+1))
                res = max(res, hash[n] + hash[n+1]);
        }
        
        return res;
    }
};