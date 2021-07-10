class Solution {
public:
    vector<bool> seen;
    set<vector<int>> st;
    int count;
    
    void solve(int v, vector<vector<int>>& graph) {
        seen[v] = true;
        
        for(int i = 0; i < graph[v].size(); i++) {
            int u = graph[v][i];
            if(!seen[u]) {
                if(!st.count({ u, v })) {
                    count++;
                    st.insert({ u, v });
                }
                solve(u, graph);
            }
        }
    }
    
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> graph(n);
        seen.assign(n, false);
        count = 0;
        
        for(vector<int> connection : connections) {
            graph[connection[0]].push_back(connection[1]);
            graph[connection[1]].push_back(connection[0]);
            st.insert(connection);
        }
        
        solve(0, graph);
        
        return count;
    }
};
