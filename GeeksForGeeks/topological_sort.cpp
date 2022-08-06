class Solution
{
	public:
	stack<int> st;
	vector<bool> seen;
	
	void solve(vector<int> adj[], int u) {
	    seen[u] = true;
	    
	    for(int i = 0; i < adj[u].size(); i++) {
	        int x = adj[u][i];
	        if(!seen[x])
	            solve(adj, x);
	    }
	    
	    st.push(u);
	}
	
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    seen.assign(V, false);
	    
	    for(int i = 0; i < V; i++) {
	        if(!seen[i])
	            solve(adj, i);
	    }
	    
	    vector<int> res;
	    while(!st.empty()) {
	        res.push_back(st.top());
	        st.pop();
	    }
	    
	    return res;
	}
};
