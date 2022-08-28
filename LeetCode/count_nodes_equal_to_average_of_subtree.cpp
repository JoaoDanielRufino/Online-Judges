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
    int getSum(TreeNode* root, int &nodeCount) {
        if(!root)
            return 0;
        
        nodeCount++;
        
        return root->val + getSum(root->left, nodeCount) + getSum(root->right, nodeCount);
    }
    
    int getAverage(TreeNode* root) {
        int nodeCount = 0;
        
        int sum = getSum(root, nodeCount);
        
        return sum / nodeCount;
    }
    
    int averageOfSubtree(TreeNode* root) {
        if(!root)
            return 0;
        
        int average = getAverage(root);
        
        if(root->val == average)
            return 1 + averageOfSubtree(root->left) + averageOfSubtree(root->right);
        
        return averageOfSubtree(root->left) + averageOfSubtree(root->right);
    }
};
