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
    bool solve(TreeNode* r1, TreeNode* r2) {
        if(!r1 && !r2)
            return true;
        
        if((!r1 && r2) || (r1 && !r2))
            return false;
        
        if(r1->val != r2->val)
            return false;
        
        return solve(r1->left, r2->right) && solve(r1->right, r2->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        return solve(root, root);
    }
};