class Solution
{
    public:
    int getSum(Node* root) {
        if(!root)
            return 0;
            
        return root->data + getSum(root->left) + getSum(root->right);
    }
    
    bool isSumTree(Node* root)
    {
        if(!root)
            return true;
            
        if(!root->left && !root->right)
            return true;
            
        int sumLeft = getSum(root->left);
        int sumRight = getSum(root->right);
        
        if((sumLeft + sumRight) != root->data)
            return false;
            
        return isSumTree(root->left) && isSumTree(root->right);
    }
};
