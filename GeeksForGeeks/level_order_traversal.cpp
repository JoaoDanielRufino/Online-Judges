class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        vector<int> res;
        queue<Node*> q;
        
        q.push(node);
        while(!q.empty()) {
            int s = q.size();
            while(s--) {
                Node *tmp = q.front();
                q.pop();
                
                res.push_back(tmp->data);
                
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
            }
        }
        
        return res;
    }
};
