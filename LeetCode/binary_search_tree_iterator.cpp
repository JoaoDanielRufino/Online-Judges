/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
private:
    void inorder(TreeNode* root) {
        if(!root)
            return;
        
        inorder(root->left);
        aux.push_back(root->val);
        inorder(root->right);
    }
    
public:
    vector<int> aux;
    int pos;
    
    BSTIterator(TreeNode* root) {
        inorder(root);
        pos = 0;
    }
    
    /** @return the next smallest number */
    int next() {
        return aux[pos++];
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return pos < aux.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */