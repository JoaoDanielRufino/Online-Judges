class Solution {
public:
    int solve(vector<vector<pair<int, int>>>& graph, int v) {
        int ans = 0;
        for(int i = 0; i < graph[v].size(); i++) {
            pair<int, int> adj = graph[v][i];
            ans = max(ans, adj.second + solve(graph, adj.first));
        }
        
        return ans;
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<pair<int, int>>> graph(n);
        
        for(int i = 0; i < manager.size(); i++) {
            if(manager[i] != -1)
                graph[manager[i]].push_back(make_pair(i, informTime[manager[i]]));
        }
        
        return solve(graph, headID);
    }
};
