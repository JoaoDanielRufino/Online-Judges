/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
unordered_map<int, int> mp;

TreeNode* solve(vector<int> &A, int l, int r, int& index) {
    if(l > r || index == A.size())
        return nullptr;
        
    TreeNode *node = new TreeNode(A[index++]);
    
    int pos = mp[node->val];
    
    node->left = solve(A, l, pos - 1, index);
    node->right = solve(A, pos + 1, r, index);
    
    return node;
}

TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    mp.clear();
    for(int i = 0; i < B.size(); i++) {
        mp[B[i]] = i;
    }
    
    int index = 0;
    return solve(A, 0, A.size()-1, index);
}
