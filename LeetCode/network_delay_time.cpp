class Solution {
public:
  
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dist(n, INT_MAX);
        
        dist[k-1] = 0;
        for(int i = 0; i < n-1; i++) {
            for(auto edge : times) {
                int u = edge[0]-1;
                int v = edge[1]-1;
                int wt = edge[2];
                
                if(dist[u] == INT_MAX)
                    continue;
                
                dist[v] = min(dist[v], dist[u] + wt);
            }
        }
        
        int res = INT_MIN;
        for(int x : dist) {
            if(x == INT_MAX)
                return -1;
            res = max(res, x);
        }
        
        return res;
    }
};
