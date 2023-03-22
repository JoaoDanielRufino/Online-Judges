class Solution {
public:
    void solve(vector<vector<pair<int, int>>>& graph, int current, vector<bool>& seen, int& minDist) {
        seen[current] = true;

        for(pair<int, int> adj : graph[current]) {
            minDist = min(minDist, adj.second);
            if(!seen[adj.first]) {
                solve(graph, adj.first, seen, minDist);
            }
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> graph(n + 1); 

        for(vector<int> road : roads) {
            graph[road[0]].push_back(make_pair(road[1], road[2]));
            graph[road[1]].push_back(make_pair(road[0], road[2]));
        }

        int minDist = INT_MAX;
        vector<bool> seen(n + 1);
        solve(graph, 1, seen, minDist);

        return minDist;
    }
};
