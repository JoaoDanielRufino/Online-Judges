//
// Binary trees are already defined with this interface:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
bool isSame(Tree<int> * t1, Tree<int> * t2) {
    if(!t1 && !t2)
        return true;
        
    if((t1 && !t2) || (!t1 && t2))
        return false;
        
    if(t1->value != t2->value)
        return false;
        
    return isSame(t1->left, t2->left) && isSame(t1->right, t2->right);
}

bool solution(Tree<int> * t1, Tree<int> * t2) {
    if(!t2)
        return true;
    
    if(!t1)
        return false;
        
    if(isSame(t1, t2))
        return true;
        
    return solution(t1->left, t2) || solution(t1->right, t2);
}
