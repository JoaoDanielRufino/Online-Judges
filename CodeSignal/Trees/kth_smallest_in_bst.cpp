//
// Binary trees are already defined with this interface:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
void solve(Tree<int>* root, int& k, int& ans) {
    if(!root)
        return;
        
    solve(root->left, k, ans);
    k--;
    if(!k) {
        ans = root->value;
        return;
    }
    solve(root->right, k, ans);
}

int solution(Tree<int> * t, int k) {
    int ans;
    
    solve(t, k, ans);
    
    return ans;
}
