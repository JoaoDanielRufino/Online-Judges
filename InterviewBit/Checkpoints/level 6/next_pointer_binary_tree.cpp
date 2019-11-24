/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* root) {
    if(!root)
            return;
        
        bool flag = false;
        queue<TreeLinkNode*> q;
        
        q.push(root);
        while(!q.empty()) {
            TreeLinkNode *prev = nullptr;
            int s = q.size();
            while(s--) {
                TreeLinkNode *tmp = q.front();
                q.pop();
                
                if(flag)
                    prev->next = tmp;
                prev = tmp;
                
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
                flag = true;
            }
            flag = false;
        }
}
