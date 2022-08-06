class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        if(!node)
            return;
            
        mirror(node->right);
        mirror(node->left);
        
        Node *tmp = node->left;
        node->left = node->right;
        node->right = tmp;
    }
};
