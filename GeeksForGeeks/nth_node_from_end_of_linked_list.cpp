int getNthFromLast(Node *head, int n)
{
       int size = 0;
       Node *curr;
       
       curr = head;
       while(curr) {
           size++;
           curr = curr->next;
       }
       
       int len = size - (n - 1);
       if(len <= 0) {
           return -1;
       }
       
       curr = head;
       while(--len) {
           curr = curr->next;
       }
       
       return curr->data;
}
