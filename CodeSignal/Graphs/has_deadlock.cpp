bool hasCycle(vector<vector<int>>& connections, int u, vector<bool>& seen, vector<bool> stack) {
    seen[u] = true;
    stack[u] = true;
    
    for(int adj : connections[u]) {
        if(stack[adj])
            return true;
            
        if(!seen[adj] && hasCycle(connections, adj, seen, stack))
            return true;
    }
    
    stack[u] = false;
    
    return false;
}

bool solution(vector<vector<int>> connections) {
    vector<bool> seen(connections.size()), stack(connections.size());
    
    for(int i = 0; i < connections.size(); i++) {
        if(!seen[i] && hasCycle(connections, i, seen, stack))
            return true;
    }
    
    return false;
}
