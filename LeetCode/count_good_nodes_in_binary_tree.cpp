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
    int res = 0;
    
    void solve(TreeNode* root, int currMax) {
        if(!root)
            return;
        
        if(root->val >= currMax) {
            res++;
            currMax = root->val;
        }
        
        solve(root->left, currMax);
        solve(root->right, currMax);
    }
    
    int goodNodes(TreeNode* root) {
        solve(root, INT_MIN);
        
        return res;
    }
};
