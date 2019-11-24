/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
            return root;
        
        bool flag = false;
        queue<Node*> q;
        
        q.push(root);
        while(!q.empty()) {
            Node *prev = nullptr;
            int s = q.size();
            while(s--) {
                Node *tmp = q.front();
                q.pop();
                
                if(flag)
                    prev->next = tmp;
                prev = tmp;
                
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
                flag = true;
            }
            flag = false;
        }
        
        return root;
    }
};