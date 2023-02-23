class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int, int>> vet;

        for(int i = 0; i < profits.size(); i++) {
            vet.push_back({capital[i], profits[i]});
        }

        sort(vet.begin(), vet.end());

        int index = 0;
        priority_queue<int> pq;
        while(k--) {
            while(index < vet.size() && vet[index].first <= w) {
                pq.push(vet[index++].second);
            }

            if(pq.empty())
                break;

            w += pq.top();
            pq.pop();
        }

        return w;
    }
};
