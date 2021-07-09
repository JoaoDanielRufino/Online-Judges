/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool find(TreeNode* root, TreeNode* aux, int target) {
        if(!root)
            return false;
        
        if(root->val == target && root != aux)
            return true;
        
        if(root->val > target)
            return find(root->left, aux, target);
        
        return find(root->right, aux, target);
    }
    
    bool solve(TreeNode* root, TreeNode* aux, int k) {
        if(!aux)
            return false;
        
        int diff = k - aux->val;
        if(find(root, aux, diff))
            return true;
        
        return solve(root, aux->left, k) || solve(root, aux->right, k);
    }
    
    bool findTarget(TreeNode* root, int k) {
        TreeNode *aux = root;
        
        return solve(root, aux, k);
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:   
    bool solve(TreeNode* root, int k, set<int>& st) {
        if(!root)
            return false;
        
        if(st.count(k - root->val))
            return true;
        
        st.insert(root->val);
        return solve(root->left, k, st) || solve(root->right, k, st);
    }
    
    bool findTarget(TreeNode* root, int k) {
        set<int> st;
        
        return solve(root, k, st);
    }
};
