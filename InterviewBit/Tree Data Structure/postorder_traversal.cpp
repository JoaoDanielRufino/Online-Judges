/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> res;
    stack<TreeNode*> st;
    set<TreeNode*> visited;
    
    while(!st.empty() || A) {
        if(A) {
            st.push(A);
            A = A->left;
        }
        else {
            A = st.top();
            st.pop();
            if(A->right && !visited.count(A->right)) {
                st.push(A);
                A = A->right;
            }
            else {
                res.push_back(A->val);
                visited.insert(A);
                A = nullptr;
            }
        }
    }
    
    return res;
}
