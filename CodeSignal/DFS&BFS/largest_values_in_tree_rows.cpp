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
    if(!t)
        return vector<int> ();
    
    vector<int> ans;
    queue<Tree<int>*> q;
    
    q.push(t);
    while(!q.empty()) {
        int s = q.size();
        int maxVal = INT_MIN;
        while(s--) {
            Tree<int> *node = q.front();
            q.pop();
            
            maxVal = max(maxVal, node->value);
            
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        ans.push_back(maxVal);
    }
    
    return ans;
}
