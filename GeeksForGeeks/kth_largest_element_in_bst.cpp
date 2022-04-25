class Solution
{
    public:
    void solve(Node* root, int& k, int& ans) {
        if(!root)
            return;
            
        solve(root->right, k, ans);
        
        k--;
        
        if(!k) {
            ans = root->data;
            return;
        }
        
        solve(root->left, k, ans);
    }
    
    int kthLargest(Node *root, int K)
    {
        int ans;
        
        solve(root, K, ans);
        
        return ans;
    }
};
