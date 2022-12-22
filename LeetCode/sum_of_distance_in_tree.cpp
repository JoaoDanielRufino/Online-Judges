class Solution {
public:
    void dfs(vector<vector<int>>& graph, int current, int parent, vector<int>& child, vector<int>& ans) {
        for(int adj : graph[current]) {
            if(adj != parent) {
                dfs(graph, adj, current, child, ans);
                child[current] += child[adj];
                ans[current] += ans[adj] + child[adj];
            }
        }
    }

    void dfs2(vector<vector<int>>& graph, int current, int parent, vector<int>& child, vector<int>& ans) {
        for(int adj : graph[current]) {
            if(adj != parent) {
                ans[adj] = ans[current] - child[adj] + graph.size() - child[adj];
                dfs2(graph, adj, current, child, ans);
            }
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);

        for(vector<int> edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        vector<int> ans(n), child(n, 1);

        dfs(graph, 0, -1, child, ans);
        dfs2(graph, 0, -1, child, ans);

        return ans;
    }
};
