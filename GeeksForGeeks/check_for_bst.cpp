class Solution
{
    public:
    vector<int> vet;
    
    void inorder(Node* root) {
        if(!root)
            return;
            
        inorder(root->left);
        vet.push_back(root->data);
        inorder(root->right);
    }
    
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        if(!root)
            return true;
            
        inorder(root);
        
        for(int i = 0; i < vet.size()-1; i++) {
            if(vet[i] > vet[i+1])
                return false;
        }
        
        return true;
    }
};
