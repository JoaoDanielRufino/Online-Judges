class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> hash;
        vector<int> res;
        
        for(int n : nums2)
            hash[n]++;
        
        for(int n : nums1) {
            if(hash[n] > 0) {
                res.push_back(n);
                hash[n]--;
            }
        }
        
        return res;
    }
};