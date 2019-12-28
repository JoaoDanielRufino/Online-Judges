/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int res;

int solve(TreeNode* A) {
    if(!A)
        return 0;
    
    int left = max(solve(A->left), 0);
    int right = max(solve(A->right), 0);
    
    res = max(res, A->val + left + right);
    
    return A->val + max(left, right);
} 

int Solution::maxPathSum(TreeNode* A) {
    res = INT_MIN;
    
    solve(A);
    
    return res;
}
