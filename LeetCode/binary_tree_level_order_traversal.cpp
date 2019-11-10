/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector< vector<int> > res;
        queue<TreeNode*> q;
        
        if(!root)
            return res;
        
        q.push(root);
        while(!q.empty()) {
            vector<int> l;
            int s = q.size();
            for(int i = 0; i < s; i++) {
                TreeNode *node = q.front();
                q.pop();
                
                l.push_back(node->val);
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            
            res.push_back(l);
        }
        
        return res;
    }
};