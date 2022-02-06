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
    void inorder(TreeNode* root, vector<int>& a) {
        if(!root)
            return;
        
        inorder(root->left, a);
        a.push_back(root->val);
        inorder(root->right, a);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> a, b, res;
        
        inorder(root1, a);
        inorder(root2, b);
        
        int i, j;
        i = j = 0;
        while(i < a.size() && j < b.size()) {
            if(a[i] < b[j])
                res.push_back(a[i++]);
            else
                res.push_back(b[j++]);
        }
        
        while(i < a.size())
            res.push_back(a[i++]);
        
        while(j < b.size())
            res.push_back(b[j++]);
        
        return res;
    }
};
