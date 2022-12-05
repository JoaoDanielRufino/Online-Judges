class Solution {
public:
    int solve(vector<int>& cost, int size) {
        if(size == 1)
            return cost[0];

        if(size <= 0)
            return 0;
        
        int candy1 = size-1, candy2 = size-2;

        return cost[candy1] + cost[candy2] + solve(cost, size - 3);
    }

    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        
        return solve(cost, cost.size());
    }
};
