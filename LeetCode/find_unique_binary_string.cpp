class Solution {
public:
    string res;
    
    void solve(set<string> st, int n, string curr) {
        if(!res.empty())
            return;
        
        if(curr.size() == n) {
            if(!st.count(curr))
                res = curr;
            return;
        }
        
        solve(st, n, curr + "1");
        solve(st, n, curr + "0");
    }
    
    string findDifferentBinaryString(vector<string>& nums) {
        set<string> st(nums.begin(), nums.end());
        
        solve(st, nums[0].size(), "");
        
        return res;
    }
};
