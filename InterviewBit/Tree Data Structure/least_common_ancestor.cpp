/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool OK(TreeNode* A, int val) {
    if(!A)
        return false;
        
    if(A->val == val)
        return true;
        
    return OK(A->left, val) || OK(A->right, val);
}

TreeNode* solve(TreeNode* A, int B, int C) {
    if(!A)
        return nullptr;
        
    if(A->val == B || A->val == C)
        return A;
        
    TreeNode *left = solve(A->left, B, C);
    TreeNode *right = solve(A->right, B, C);
    
    if(left && right)
        return A;
        
    return left ? left : right;
}


int Solution::lca(TreeNode* A, int B, int C) {
    if(OK(A, B) && OK(A, C)) {
        TreeNode *lca = solve(A, B, C);
        
        if(lca)
            return lca->val;
    }
    return -1;
}
