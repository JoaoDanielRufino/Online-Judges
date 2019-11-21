/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int height(TreeNode* A) {
    if(!A)
        return 0;
        
    return max(1 + height(A->left), 1 + height(A->right));
}

int Solution::isBalanced(TreeNode* A) {
    if(!A)
        return true;
        
    int left = height(A->left);
    int right = height(A->right);
    
    if(abs(left - right) > 1)
        return false;
        
    return isBalanced(A->left) and isBalanced(A->right);
}
