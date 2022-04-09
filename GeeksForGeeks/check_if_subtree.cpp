class Solution
{
  public:
    bool isEqual(Node* T, Node* S) {
        if(!T && !S)
            return true;
            
        if((!T && S) || (T && !S))
            return false;
            
        if(T->data != S->data)
            return false;
        
        return isEqual(T->left, S->left) && isEqual(T->right, S->right);
    }
    
    //Function to check if S is a subtree of tree T.
    bool isSubTree(Node* T, Node* S) 
    {
        if(!T)
            return false;
            
        if(isEqual(T, S))
            return true;
            
        return isSubTree(T->left, S) || isSubTree(T->right, S);
    }
};
