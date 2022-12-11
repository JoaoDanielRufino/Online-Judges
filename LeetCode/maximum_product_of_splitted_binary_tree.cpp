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
    int mod = 1000000007;
    long int ans;

    int sumTree(TreeNode *root) {
        if(!root)
            return 0;

        return root->val + sumTree(root->left) + sumTree(root->right);
    }

    long int solve(TreeNode *root, long int totalSum) {
        if(!root)
            return 0;

        long int sumTree = root->val + solve(root->left, totalSum) + solve(root->right, totalSum);

        ans = max(ans, sumTree * (totalSum - sumTree));

        return sumTree;
    }

    int maxProduct(TreeNode* root) {
        int totalSum = sumTree(root);

        ans = 0L;

        solve(root, totalSum);

        return ans % mod;
    }
};
