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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;
        vector< vector<int> > res;
        
        if(!root)
            return res;
        
        q.push(root);
        while(!q.empty()) {
            vector<int> tmp;
            int s = q.size();
            while(s--) {
                TreeNode *node = q.front();
                q.pop();
                
                tmp.push_back(node->val);
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            res.push_back(tmp);
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};