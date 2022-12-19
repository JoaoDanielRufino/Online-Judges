class Solution {
public:
    bool dfs(vector<vector<int>>& graph, int actual, int destination, vector<bool>& seen) {
        if(actual == destination)
            return true;
        
        seen[actual] = true;

        for(int adj : graph[actual]) {
            if(!seen[adj] && dfs(graph, adj, destination, seen))
                return true;
        }

        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);

        for(vector<int> edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        vector<bool> seen(n);
        
        return dfs(graph, source, destination, seen);
    }
};
