/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> st;
        
        while(!st.empty() || root) {
            if(root) {
                res.push_back(root->val);
                st.push(root->right);
                st.push(root->left);
            }
            
            root = st.top();
            st.pop();
        }
        
        return res;
    }
};