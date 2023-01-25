class Solution {
public:
    void minDistances(vector<vector<int>>& graph, int current, vector<bool>& seen, int depth, vector<int>& distances) {
        seen[current] = true;
        
        distances[current] = min(distances[current], depth);

        for(int adj : graph[current]) {
            if(!seen[adj]) {
                minDistances(graph, adj, seen, depth + 1, distances);
            }
        }

        seen[current] = false;
    }

    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        vector<vector<int>> graph(edges.size());
        vector<bool> seen(edges.size());

        for(int i = 0; i < edges.size(); i++) {
            if(edges[i] != -1)
                graph[i].push_back(edges[i]);
        }

        vector<int> distanceNode1(edges.size(), INT_MAX), distanceNode2(edges.size(), INT_MAX);

        minDistances(graph, node1, seen, 0, distanceNode1);
        minDistances(graph, node2, seen, 0, distanceNode2);

        int ans = -1, minDist = INT_MAX;
        for(int i = 0; i < edges.size(); i++) {
            if(distanceNode1[i] == INT_MAX || distanceNode2[i] == INT_MAX)
                continue;

            int maxDist = max(distanceNode1[i], distanceNode2[i]);
            if(maxDist < minDist) {
                ans = i;
                minDist = maxDist;
            }
        }

        return ans;
    }
};
