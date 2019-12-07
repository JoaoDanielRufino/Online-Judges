/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* Solution::flatten(TreeNode* A) {
    if(!A)
        return A;
    
    TreeNode *prev = nullptr;
    stack<TreeNode*> st;
    
    st.push(A);
    while(!st.empty()) {
        TreeNode *tmp = st.top();
        st.pop();
        
        if(tmp->right)
            st.push(tmp->right);
        if(tmp->left)
            st.push(tmp->left);
            
        if(prev) {
            prev->left = nullptr;
            prev->right = tmp;
        }
        prev = tmp;
    }
    
    return A;
}
