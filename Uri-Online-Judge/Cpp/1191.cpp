#include <iostream>
#include <unordered_map>

using namespace std;

struct Node {
    char val;
    Node* left;
    Node* right;

    Node(char x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

unordered_map<char, int> mp;

Node* solve(string prefix, int l, int r, int& index) {
    if(l > r || index >= prefix.size())
        return nullptr;

    Node *tmp = new Node(prefix[index++]);

    int pos = mp[tmp->val];

    tmp->left = solve(prefix, l, pos - 1, index);
    tmp->right = solve(prefix, pos + 1, r , index);

    return tmp;
}

void postfix(Node *tree) {
    if(!tree)
        return;

    postfix(tree->left);
    postfix(tree->right);
    cout << tree->val;
}

int main() {

    ios::sync_with_stdio(false); cin.tie(0);
    string prefix, infix;

    while(cin >> prefix >> infix) {
        mp.clear();
        for(int i = 0; i < infix.size(); i++)
            mp[infix[i]] = i;

        int index = 0;
        Node *treeNode = solve(prefix, 0, prefix.size()-1, index);
        postfix(treeNode);

        cout << endl;
    }

    return 0;
}