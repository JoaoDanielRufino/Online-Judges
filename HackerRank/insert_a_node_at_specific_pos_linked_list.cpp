SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode *curr = llist, *prev = nullptr;
    
    while(position--) {
        prev = curr;
        curr = curr->next;
    }
    
    SinglyLinkedListNode *tmp = new SinglyLinkedListNode(data);
    prev->next = tmp;
    tmp->next = curr;
    
    return llist;
}
