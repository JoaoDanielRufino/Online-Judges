class Solution {
public:
    set<vector<int>> st;
    vector<vector<int>> ans;

    void solve(vector<int>& nums, vector<int> current, int start) {
        if(current.size() >= 2 && !st.count(current)) {
            ans.push_back(current);
            st.insert(current);
        }

        for(int i = start; i < nums.size(); i++) {
            if(!current.size() || current[current.size()-1] <= nums[i]) {
                current.push_back(nums[i]);
                solve(nums, current, i + 1);
                current.pop_back();
            }
        }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        solve(nums, vector<int> (), 0);

        return ans;
    }
};
