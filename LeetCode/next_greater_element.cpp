class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;
        vector<int> res;
        
        for(int i = 0; i < nums2.size(); i++) {
            mp[nums2[i]] = i;
        }
        
        for(int x : nums1) {
            if(!mp.count(x)) {
                res.push_back(-1);
                continue;
            }
            
            int i = mp[x];
            while(i < nums2.size()) {
                if(nums2[i] > x) {
                    res.push_back(nums2[i]);
                    break;
                }
                i++;
            }
            if(i == nums2.size())
                res.push_back(-1);
        }
        
        return res;
    }
};
