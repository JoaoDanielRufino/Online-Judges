/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/

int height(Node* root) {
  if(!root)
      return 0;

  if(!root->left && !root->right)
      return 0;

  return max(1 + height(root->left), 1 + height(root->right));
}
