//
// Binary trees are already defined with this interface:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
void solve(Tree<int>* root, long long currNumber, long long& sum) {
    if(!root)
        return;
        
    if(!root->left && !root->right) {
        sum += currNumber * 10 + root->value;
        return;
    }
    
    solve(root->left, currNumber * 10 + root->value, sum);
    solve(root->right, currNumber * 10 + root->value, sum);
}

long long solution(Tree<int> * t) {
    long long ans = 0;
    
    solve(t, 0, ans);
    
    return ans;
}
