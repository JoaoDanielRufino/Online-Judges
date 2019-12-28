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
    int res;
    
    void solve(TreeNode* root, int sum) {
        if(!root)
            return;
        
        sum = (sum * 10) + root->val;
        if(!root->left && !root->right)
            res += sum;
        
        solve(root->left, sum);
        solve(root->right, sum);
    }
    
    int sumNumbers(TreeNode* root) {
        res = 0;
        
        solve(root, 0);
        
        return res;
    }
};