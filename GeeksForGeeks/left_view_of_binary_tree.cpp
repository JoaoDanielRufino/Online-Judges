vector<int> leftView(Node *root)
{
   if(!root)
      return vector<int> ();
    
   vector<int> res;
   queue<Node*> q;
   
   q.push(root);
   while(!q.empty()) {
       int s = q.size();
       for(int i = 0; i < s; i++) {
           Node* node = q.front();
           q.pop();
           
           if(!i){
               res.push_back(node->data);
           }
           
           if(node->left) {
               q.push(node->left);
           }
           if(node->right) {
               q.push(node->right);
           }
       }
   }
   
   return res;
}
