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
    int widthOfBinaryTree(TreeNode* root) {
        int res = 0;
        queue<pair<TreeNode*, int>> q;
        
        q.push({ root, 1 });
        while(!q.empty()) {
            int start = q.front().second;
            int end = q.back().second;
            int size = q.size();
            res = max(res, end - start + 1);
            while(size--) {
                pair<TreeNode*, int> node = q.front();
                q.pop();
                
                if (node.first->left)
                    q.push({ node.first->left, ((node.second - start) * 2) - 1 });

                if (node.first->right)
                    q.push({ node.first->right, (node.second - start) * 2 });
            }
        }
        
        return res;
    }
};
