class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0;
        
        for(int i = 0; i < accounts.size(); i++) {
            int sum = 0;
            for(int money : accounts[i]) {
                sum += money;
            }
            res = max(res, sum);
        }
        
        return res;
    }
};
