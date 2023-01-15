class Solution {
public:
    int solve(vector<vector<int>>& graph, vector<bool>& hasApple, int current, int parent) {
        int ans = 0;
        for(int adj : graph[current]) {
            if(adj != parent) {
                int childTime = solve(graph, hasApple, adj, current);

                if(childTime || hasApple[adj])
                    ans += childTime + 2;
            }
        }

        return ans;
    }

    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> graph(n);

        for(vector<int> edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        return solve(graph, hasApple, 0, -1);
    }
};
