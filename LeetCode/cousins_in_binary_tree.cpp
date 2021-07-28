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
    int parentX, parentY;
    int heightX, heightY;
    
    void solve(TreeNode* root, int x, int y, int parent, int currHeight) {
        if(!root)
            return;
        
        if(root->val == x) {
            heightX = currHeight;
            parentX = parent;
        } else if(root->val == y) {
            heightY = currHeight;
            parentY = parent;
        }
        
        solve(root->left, x, y, root->val, currHeight+1);
        solve(root->right, x, y, root->val, currHeight+1);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        solve(root, x, y, root->val, 0);
        
        if(heightX != heightY)
            return false;
        
        return parentX != parentY;
    }
};
