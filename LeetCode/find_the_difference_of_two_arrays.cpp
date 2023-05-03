class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> a, b;

        for(int x : nums1) {
            a.insert(x);
        }

        for(int x : nums2) {
            b.insert(x);
        }

        vector<int> ans1, ans2;

        for(auto x : a) {
            if(!b.count(x))
                ans1.push_back(x);
        }

        for(auto x : b) {
            if(!a.count(x))
                ans2.push_back(x);
        }

        vector<vector<int>> ans;

        ans.push_back(ans1);
        ans.push_back(ans2);

        return ans;
    }
};
