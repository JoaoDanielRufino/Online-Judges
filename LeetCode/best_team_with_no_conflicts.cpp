class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int, int>> vet;

        for(int i = 0; i < scores.size(); i++) {
            vet.push_back({ ages[i], scores[i] });
        }

        sort(vet.begin(), vet.end(), greater<>());

        int ans = 0;
        vector<int> dp(vet.size());
        for(int i = 0; i < vet.size(); i++) {
            dp[i] = vet[i].second;
            for(int j = 0; j < i; j++) {
                if(vet[j].second >= vet[i].second) {
                    dp[i] = max(dp[i], dp[j] + vet[i].second);
                }
            }
            ans = max(ans, dp[i]);
        }

        return ans;
    }
};
