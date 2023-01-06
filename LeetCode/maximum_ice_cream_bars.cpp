class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());    

        int ans = 0;
        for(int cost : costs) {
            if(coins - cost >= 0) {
                ans++;
                coins -= cost;
            }
            else
                break;
        }

        return ans;
    }
};
