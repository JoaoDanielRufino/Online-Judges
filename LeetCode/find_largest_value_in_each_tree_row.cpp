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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        
        if(!root)
            return res;
        
        queue<TreeNode*> q;
        
        q.push(root);
        while(!q.empty()) {
            int maxVal = q.front()->val;
            int size = q.size();
            while(size--) {
                TreeNode *node = q.front();
                q.pop();
                
                maxVal = max(maxVal, node->val);
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            res.push_back(maxVal);
        }
        
        return res;
    }
};
