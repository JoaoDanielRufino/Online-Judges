class Solution{
    public:
    int height(Node *root) {
        if(!root)
            return 0;
            
        return 1 + max(height(root->left), height(root->right));
    }
    
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if(!root)
            return true;
            
        int left = height(root->left);
        int right = height(root->right);
        
        if(abs(left - right) > 1)
            return false;
            
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
