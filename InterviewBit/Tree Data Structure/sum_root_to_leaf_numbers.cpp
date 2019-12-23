/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void helper(TreeNode* A, long long int &sum, long long int aux) {
    if(!A)
        return;
        
    aux = ((aux * 10) + A->val) % 1003;
    
    if(!A->left && !A->right) {
        sum += aux;
        return;
    }
    
    helper(A->left, sum, aux);
    helper(A->right, sum, aux);
}

int Solution::sumNumbers(TreeNode* A) {
    long long int sum = 0;
    
    helper(A, sum, 0);
    
    return sum % 1003;
}
