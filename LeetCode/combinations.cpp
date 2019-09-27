class Solution {
public:
    vector< vector<int> > res;
    
    void solve(vector<int>& nums, vector<int> current, int start, int k) {
        if(current.size() > k)
            return;
        
        if(current.size() == k) {
            res.push_back(current);
            return;
        }
        
        for(int i = start; i < nums.size(); i++) {
            if(nums[i] != -1) {
                int aux = nums[i];
                nums[i] = -1;
                current.push_back(aux);
                solve(nums, current, i, k);
                current.pop_back();
                nums[i] = aux;
            }
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums, current;
        
        for(int i = 1; i <= n; i++)
            nums.push_back(i);
        
        solve(nums, current, 0, k);
        
        return res;
    }
};