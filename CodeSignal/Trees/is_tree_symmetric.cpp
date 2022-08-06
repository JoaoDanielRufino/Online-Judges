//
// Binary trees are already defined with this interface:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
bool solve(Tree<int> *root1, Tree<int> *root2) {
    if(!root1 && !root2)
        return true;
        
    if((!root1 && root2) || (root1 && !root2))
        return false;
        
    if(root1->value != root2->value)
        return false;
        
    return solve(root1->left, root2->right) && solve(root1->right, root2->left);
}

bool solution(Tree<int> * t) {
    return solve(t, t);
}
