class Solution {
public:
    vector<vector<int>> res;
    
    void solve(vector<vector<int>>& graph, vector<int> curr, int v, int target) {
        if(v == target) {
            res.push_back(curr);
            return;
        }
        
        for(int adj : graph[v]) {
            curr.push_back(adj);
            solve(graph, curr, adj, target);
            curr.pop_back();
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> curr;
        
        curr.push_back(0);
        solve(graph, curr, 0, graph.size()-1);
        
        return res;
    }
};
