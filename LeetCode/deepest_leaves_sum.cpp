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
    int sum;
    
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
    
    void solve(TreeNode* root, int depth) {
        if(!root)
            return;
        
        if(!depth)
            sum += root->val;
        
        solve(root->left, depth-1);
        solve(root->right, depth-1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int depth = maxDepth(root);
        
        sum = 0;
        solve(root, depth-1);
        
        return sum;
    }
};
