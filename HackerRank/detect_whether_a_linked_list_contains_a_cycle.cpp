bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* tmp;
    set<SinglyLinkedListNode*> visited;
    
    tmp = head;
    while(tmp) {
        if(visited.count(tmp))
            return true;
        visited.insert(tmp);
        tmp = tmp->next;
    }
    
    return false;
}
