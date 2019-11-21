/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isValidBST(TreeNode* A) {
    TreeNode *prev = nullptr;
    stack<TreeNode*> st;
    
    while(!st.empty() || A) {
        while(A) {
            st.push(A);
            A = A->left;
        }
        
        A = st.top();
        st.pop();
        
        if(prev && A->val <= prev->val)
            return false;
            
        prev = A;
        A = A->right;
    }
    
    return true;
}