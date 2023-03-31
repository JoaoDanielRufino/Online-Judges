class Solution {
public:
    unordered_map<int, int> dp;

    int findIndex(vector<int>& days, int current, int amount) {
        int maxPossible = (days[current] + amount) - 1;

        for(int i = current; i < days.size(); i++) {
            if(days[i] > maxPossible)
                return i;
        }

        return days.size();
    }

    int solve(vector<int>& days, vector<int>& costs, int index) {
        if(index >= days.size())
            return 0;

        if(dp.count(index))
            return dp[index];

        int oneDay, sDay, tDay;

        oneDay = costs[0] + solve(days, costs, index + 1);
        sDay = costs[1] + solve(days, costs, findIndex(days, index, 7));
        tDay = costs[2] + solve(days, costs, findIndex(days, index, 30));

        return dp[index] = min({oneDay, sDay, tDay});
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return solve(days, costs, 0);
    }
};
