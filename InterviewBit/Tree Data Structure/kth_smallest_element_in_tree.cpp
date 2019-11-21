/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void solve(TreeNode* A, int &B, int &res) {
    if(!A)
        return;
        
    solve(A->left, B, res);
    
    B--;
    
    if(!B) {
        res = A->val;
        return;
    }
    
    solve(A->right, B, res);
}

int Solution::kthsmallest(TreeNode* A, int B) {
    int res;
    
    solve(A, B, res);
    
    return res;
}
