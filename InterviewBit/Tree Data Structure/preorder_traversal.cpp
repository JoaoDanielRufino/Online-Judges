/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> res;
    stack<TreeNode*>st;
    
    while(!st.empty() || A) {
        if(A) {
            res.push_back(A->val);
            st.push(A->right);
            st.push(A->left);
        }
        
        A = st.top();
        st.pop();
    }
    
    return res;
}
