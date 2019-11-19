/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool solve(TreeNode *A, int current, int B) {
    if(!A)
        return false;
        
    if(!A->left && !A->right && A->val + current == B)
        return true;
        
    return solve(A->left, A->val + current, B) || solve(A->right, A->val + current, B);
} 

int Solution::hasPathSum(TreeNode* A, int B) {
    return solve(A, 0, B);
}
