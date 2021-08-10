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
    long int firstMin = LONG_MAX;
    long int secondMin = LONG_MAX;
    
    void solve(TreeNode* root) {
        if(!root)
            return;
        
        if(root->val < firstMin) {
            secondMin = firstMin;
            firstMin = root->val;
        } else if(root->val < secondMin && root->val != firstMin) {
            secondMin = root->val;
        }
        
        solve(root->left);
        solve(root->right);
    }
    
    
    
    int findSecondMinimumValue(TreeNode* root) {
        solve(root);
        
        return secondMin == LONG_MAX ? -1 : secondMin;
    }
};
