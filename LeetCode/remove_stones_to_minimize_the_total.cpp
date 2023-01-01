class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        long long int ans = 0;

        for(int pile : piles) {
            ans += pile;
            pq.push(pile);
        }

        while(k--) {
            int newPile = ceil(pq.top() / 2.0);
            ans -= pq.top() - newPile;
            pq.pop();
            pq.push(newPile);
        }

        return ans;
    }
};
