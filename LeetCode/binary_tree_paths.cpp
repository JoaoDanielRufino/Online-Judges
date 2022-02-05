/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<string> res;
    
    void solve(TreeNode* root, string curr) {
        if(!root)
            return;
        
        string strVal = to_string(root->val);
        
        if(!root->left && !root->right) {
            res.push_back(curr + strVal);
            return;
        }
        
        solve(root->left, curr + strVal + "->");
        solve(root->right, curr + strVal + "->");
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        solve(root, "");
        
        return res;
    }
};
