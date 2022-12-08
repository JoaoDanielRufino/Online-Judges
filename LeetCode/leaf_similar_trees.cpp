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
    void getLeaves(TreeNode *root, vector<int>& leaves) {
        if(!root)
            return;

        if(!root->left && !root->right) {
            leaves.push_back(root->val);
            return;
        }

        getLeaves(root->left, leaves);
        getLeaves(root->right, leaves);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leavesRoot1, leavesRoot2;

        getLeaves(root1, leavesRoot1);
        getLeaves(root2, leavesRoot2);

        if(leavesRoot1.size() != leavesRoot2.size())
            return false;

        for(int i = 0; i < leavesRoot1.size(); i++) {
            if(leavesRoot1[i] != leavesRoot2[i])
                return false;
        }

        return true;
    }
};
