/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    bool flag = true;
    vector< vector<int> > res;
    queue<TreeNode*> q;
    
    if(!A)
        return res;
        
    q.push(A);
    while(!q.empty()) {
        vector<int> tmp;
        int s = q.size();
        for(int i = 0; i < s; i++) {
            TreeNode *node = q.front();
            q.pop();
            
            tmp.push_back(node->val);
            
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        
        if(!flag)
            reverse(tmp.begin(), tmp.end());
        flag = !flag;
        res.push_back(tmp);
    }
    
    return res;
}
