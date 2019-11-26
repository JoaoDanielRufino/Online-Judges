/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool solve(TreeNode* A, TreeNode* B) {
    if(!A && !B)
        return true;
        
    if((!A && B) || (A && !B))
        return false;
        
    if(A->val != B->val)
        return false;
        
    return solve(A->left, B->right) && solve(A->right, B->left);
} 

int Solution::isSymmetric(TreeNode* A) {
    return solve(A, A);
}
