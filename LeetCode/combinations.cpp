class Solution {
public:
    vector<vector<int>> ans;

    void solve(int n, int k, int start, vector<int> curr) {
        if(curr.size() == k) {
            ans.push_back(curr);
            return;
        }

        for(int i = start; i <= n; i++) {
            curr.push_back(i);
            solve(n, k, i + 1, curr);
            curr.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        solve(n, k, 1, vector<int>());

        return ans;
    }
};
