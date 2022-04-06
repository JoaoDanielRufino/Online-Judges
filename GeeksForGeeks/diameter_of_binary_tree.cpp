class Solution {
  public:
    int solve(Node* root, int& res) {
        if(!root)
            return 0;
            
        int left = solve(root->left, res);
        int right = solve(root->right, res);
        
        res = max(res, left + right);
        
        return 1 + max(left, right);
    }
  
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        int res = 0;
        
        solve(root, res);
        
        return res + 1;
    }
};
