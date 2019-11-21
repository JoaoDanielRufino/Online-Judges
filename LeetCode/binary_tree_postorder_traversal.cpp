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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> st;
        set<TreeNode*> s;
        
        while(!st.empty() || root) {
            if(root) {
                st.push(root);
                root = root->left;
            }
            else {
                root = st.top();
                st.pop();
                if(root->right and !s.count(root->right)) {
                    st.push(root);
                    root = root->right;
                }
                else {
                    res.push_back(root->val);
                    s.insert(root);
                    root = nullptr;
                }
            }
        }
        
        return res;
    }
};