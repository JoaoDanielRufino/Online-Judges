/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
 
UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node) {
    queue<UndirectedGraphNode*> q;
    unordered_map<UndirectedGraphNode*, UndirectedGraphNode*> hash;
    
    hash[node] = new UndirectedGraphNode(node->label);
    
    q.push(node);
    while(!q.empty()) {
        UndirectedGraphNode *u = q.front();
        q.pop();
        
        for(auto n : u->neighbors) {
            if(!hash.count(n)) {
                hash[n] = new UndirectedGraphNode(n->label);
                q.push(n);
            }
            hash[u]->neighbors.push_back(hash[n]);
        }
    }
    
    return hash[node];
}
