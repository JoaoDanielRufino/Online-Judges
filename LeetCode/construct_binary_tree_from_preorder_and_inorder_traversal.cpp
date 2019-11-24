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
    unordered_map<int, int> mp;
    
    TreeNode* solve(vector<int>& preorder, int l, int r, int& index) {
        if(l > r || index == preorder.size())
            return nullptr;
        
        TreeNode *node = new TreeNode(preorder[index++]);
        
        int pos = mp[node->val];
        
        node->left = solve(preorder, l, pos - 1, index);
        node->right = solve(preorder, pos + 1, r, index);
        
        return node;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }
        
        int index = 0;
        return solve(preorder, 0, preorder.size()-1, index);
    }
};