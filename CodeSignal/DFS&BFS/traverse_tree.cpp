//
// Binary trees are already defined with this interface:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
vector<int> solution(Tree<int> * t) {
    vector<int> res;
    
    if(!t)
        return res;
    
    queue<Tree<int>*> q;
    
    q.push(t);
    while(!q.empty()) {
        int s = q.size();
        for(int i = 0; i < s; i++) {
            Tree<int> *node = q.front();
            q.pop();
            
            res.push_back(node->value);
            
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
    }
    
    return res;
}
