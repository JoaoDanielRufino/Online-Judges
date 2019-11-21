/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
TreeNode* solve(const vector<int> &A, int l, int r) {
    if(l > r)
        return nullptr;
        
    int mid = l + (r - l) / 2;
    
    TreeNode *tmp = new TreeNode(A[mid]);
    
    tmp->left = solve(A, l, mid-1);
    tmp->right = solve(A, mid+1, r);
    
    return tmp;
}

TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    return solve(A, 0, A.size()-1);
}
