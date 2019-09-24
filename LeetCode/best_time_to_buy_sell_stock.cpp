class Solution {
public:    
    int maxProfit(vector<int>& prices) {
        if(!prices.size())
            return 0;
        
        int minNum;
        int profit = 0;
        
        minNum = prices[0];
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < minNum)
                minNum = prices[i];
            profit = max(profit, prices[i] - minNum);
        }
        
        return profit;
    }
};