void dfs(int v, int& size, vector<bool>& seen, vector<vector<int>>& graph) {
    seen[v] = true;
    
    for(int adj : graph[v]) {
        if(!seen[adj]) {
            size++;
            dfs(adj, size, seen, graph);
        }
    }
}

vector<int> componentsInGraph(vector<vector<int>> gb) {
    int maxVal = -1;
    for(vector<int> g : gb)
        maxVal = max(maxVal, max(g[0], g[1]));
        
    vector<vector<int>> graph(maxVal);
    vector<bool> seen(maxVal, false);
    
    for(vector<int> g : gb) {
        graph[g[0]-1].push_back(g[1]-1);
        graph[g[1]-1].push_back(g[0]-1);
    }
    
    int minSize = INT_MAX, maxSize = INT_MIN;
    for(int i = 0; i < maxVal; i++) {
        int size = 1;
        if(!seen[i]) {
            dfs(i, size, seen, graph);
            if(size > 1) {
                minSize = min(minSize, size);
                maxSize = max(maxSize, size);
            }
        }
    }
    
    vector<int> res;
    res.push_back(minSize);
    res.push_back(maxSize);
    
    return res;
}
