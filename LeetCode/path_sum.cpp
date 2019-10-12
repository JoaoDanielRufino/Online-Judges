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
    bool hasSum(TreeNode* root, int sum, int current) {
        if(!root)
            return false;
        
        if(!root->left && !root->right && sum == (current + root->val))
            return true;
        
        return hasSum(root->left, sum, current + root->val) || hasSum(root->right, sum, current + root->val); 
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        return hasSum(root, sum, 0);
    }
};