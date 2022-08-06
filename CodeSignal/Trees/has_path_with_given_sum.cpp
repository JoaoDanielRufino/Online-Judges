//
// Binary trees are already defined with this interface:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };

bool hasSum(Tree<int>* root, int s) {
    if(!root)
        return false;
    
    if(!root->left && !root->right)
        return root->value == s;
    
    return hasSum(root->left, s - root->value) || hasSum(root->right, s - root->value); 
}

bool solution(Tree<int> * t, int s) {
    return hasSum(t, s);
}
