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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        bool flag = true;
        vector< vector<int> > res;
        queue<TreeNode*> q;
        
        if(!root)
            return res;
        
        q.push(root);
        while(!q.empty()) {
            vector<int> tmp;
            int s = q.size();
            for(int i = 0; i < s; i++) {
                TreeNode *aux = q.front();
                q.pop();
                
                tmp.push_back(aux->val);
                
                if(aux->right)
                    q.push(aux->right);
                if(aux->left)
                    q.push(aux->left);
            }
            
            if(flag)
                reverse(tmp.begin(), tmp.end());
            
            flag = !flag;
            res.push_back(tmp);
        }
        
        return res;
    }
};