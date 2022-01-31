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
    int posMaxValue(vector<int>& nums, int left, int right) {
        int pos = 0;
        int maxVal = -1;
        
        for(int i = left; i <= right; i++) {
            if(nums[i] > maxVal) {
                pos = i;
                maxVal = nums[i];
            }
        }
        
        return pos;
    }
    
    TreeNode* solve(vector<int>& nums, int left, int right) {
        if(left > right)
            return nullptr;
        
        int pos = posMaxValue(nums, left, right);
        TreeNode* node = new TreeNode(nums[pos]);
        
        node->left = solve(nums, left, pos-1);
        node->right = solve(nums, pos+1, right);
        
        return node;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return solve(nums, 0, nums.size()-1);
    }
};
