/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

void levelOrder(Node * root) {
    queue<Node*> q;

    q.push(root);
    while(!q.empty()) {
        int size = q.size();
        for(int i = 0; i < size; i++) {
            Node *curr = q.front();
            q.pop();

            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);

            cout << curr->data << " ";
        }
    }
}
