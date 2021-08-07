void traverseTree(node* root, string curr, unordered_map<string, char>& encodedChars) {
    if(!root)
        return;
        
    if(root->data)
        encodedChars[curr] = root->data;
    
    traverseTree(root->left, curr + "0", encodedChars);
    traverseTree(root->right, curr + "1", encodedChars);
}

void decode_huff(node * root, string s) {
    string res;
    unordered_map<string, char> encodedChars;
    
    traverseTree(root, "", encodedChars);
    
    string curr;
    for(char c : s) {
        curr += c;
        if(encodedChars.count(curr)) {
            res += encodedChars[curr];
            curr.clear();
        }
    }
    
    cout << res << endl;
}
