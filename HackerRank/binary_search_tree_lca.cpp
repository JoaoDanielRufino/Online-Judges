Node* res;

bool hasElem(Node* root, int elem) {
    if(!root)
        return false;
        
    if(root->data == elem)
        return true;
        
    if(elem < root->data)
        return hasElem(root->left, elem);
    return hasElem(root->right, elem);
}

void solve(Node* root, int v1, int v2) {
    if(!root)
        return;
    
    if(hasElem(root, v1) && hasElem(root, v2)) {
        res = root;
    }
    
    solve(root->left, v1, v2);
    solve(root->right, v1, v2);
}

Node *lca(Node *root, int v1,int v2) {
    solve(root, v1, v2);
    
    return res;
}
