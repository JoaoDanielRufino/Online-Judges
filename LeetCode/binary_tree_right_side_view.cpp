/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root)
            return vector<int> ();
        
        vector<int> res;
        queue<TreeNode*> q;
        
        q.push(root);
        while(!q.empty()) {
            int s = q.size();
            while(s > 0) {
                TreeNode* node = q.front();
                q.pop();
                
                if(s == 1)
                    res.push_back(node->val);
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                
                s--;
            }
        }
        
        return res;
    }
};
