/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> res;
    stack<TreeNode*> st;
    
    while(!st.empty() || A) {
        while(A) {
            st.push(A);
            A = A->left;
        }
        
        A = st.top();
        st.pop();
        
        res.push_back(A->val);
        
        A = A->right;
    }
    
    return res;
}
