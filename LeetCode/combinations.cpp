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

// Or
class Solution {
public:
    vector<vector<int>> solve(int n, int k, int start, vector<int> curr) {
        vector<vector<int>> ans;

        if(curr.size() == k) {
            ans.push_back(curr);
            return ans;
        }

        for(int i = start; i <= n; i++) {
            curr.push_back(i);
            vector<vector<int>> aux = solve(n, k, i+1, curr);
            for(vector<int> vet : aux) {
                ans.push_back(vet);
            }
            curr.pop_back();
        }

        return ans;
    }

    vector<vector<int>> combine(int n, int k) {
        return solve(n, k, 1, vector<int> ());
    }
};
