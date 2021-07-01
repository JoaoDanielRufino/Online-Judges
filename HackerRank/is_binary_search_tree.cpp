/*
The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/

void inOrder(Node* root, vector<int> &vet) {
      if(!root)
          return;

      inOrder(root->left, vet);
      vet.push_back(root->data);
      inOrder(root->right, vet);
  }

bool checkBST(Node* root) {
      vector<int> vet;

      inOrder(root, vet);

      for(int i = 0; i < vet.size()-1; i++) {
          if(vet[i] >= vet[i+1])
              return false;
      }

      return true;
}
