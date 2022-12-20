class Solution {
public:
    double bfs(vector<vector<pair<int, double>>>& graph, int start, int end) {
        priority_queue<pair<double, int>, vector<pair<double, int>>> pq;
        vector<double> dist(graph.size(), DBL_MIN);

        dist[start] = 1.0;
        pq.push({ 1.0, start });
        while(!pq.empty()) {
            int current = pq.top().second;
            pq.pop();
            
            if(current == end)
                return dist[end];

            for(pair<int, double> adj : graph[current]) {
                if(dist[adj.first] < dist[current] * adj.second) {
                    dist[adj.first] = dist[current] * adj.second;
                    pq.push({ dist[adj.first], adj.first });
                }
            }
        }

        return 0.0;
    }

    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int, double>>> graph(n);

        for(int i = 0; i < edges.size(); i++) {
            vector<int> edge = edges[i];
            graph[edge[0]].push_back({ edge[1], succProb[i] });
            graph[edge[1]].push_back({ edge[0], succProb[i] });
        }

        return bfs(graph, start, end);
    }
};
