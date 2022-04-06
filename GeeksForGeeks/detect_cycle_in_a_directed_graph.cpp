class Solution {
  public:
    int solve(vector<int> adj[], int u, int V, vector<bool> &seen, vector<bool> &stack) {
        seen[u] = true;
        stack[u] = true;
        
        for(int i = 0; i < adj[u].size(); i++) {
            if(stack[adj[u][i]])
                return true;
            if(!seen[adj[u][i]] && solve(adj, adj[u][i], V, seen, stack))
                return true;
        }
        
        stack[u] = false;
        return false;
    }
  
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> seen(V, false);
        vector<bool> stack(V, false);
        
        for(int i = 0; i < V; i++) {
            if(solve(adj, i, V, seen, stack))
                return true;
        }
        
        return false;
    }
};
