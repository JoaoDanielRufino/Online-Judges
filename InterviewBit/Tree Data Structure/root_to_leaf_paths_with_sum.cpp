/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
vector< vector<int> > res;

void solve(TreeNode* A, vector<int> curr, int sum, int B) {
    if(!A)
        return;
        
    if(!A->left && !A->right && A->val + sum == B) {
        curr.push_back(A->val);
        res.push_back(curr);
        return;
    }
    
    curr.push_back(A->val);
    solve(A->left, curr, A->val + sum, B);
    solve(A->right, curr, A->val + sum, B);
    curr.pop_back();
}

vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    res.clear();
    
    solve(A, vector<int> (), 0, B);
    
    return res;
}
