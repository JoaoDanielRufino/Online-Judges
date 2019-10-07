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
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
       
        if(!root->left && !root->right)
            return 1;
        
        if(root->left && !root->right)
            return 1 + minDepth(root->left);
        
        if(root->right && !root->left)
            return 1 + minDepth(root->right);
        
        return min(1 + minDepth(root->left), 1 + minDepth(root->right));
    }
};