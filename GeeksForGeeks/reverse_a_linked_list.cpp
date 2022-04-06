class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        struct Node *curr, *prev;
        
        curr = head;
        prev = nullptr;
        while(curr) {
            struct Node *aux = curr->next;
            curr->next = prev;
            prev = curr;
            curr = aux;
        }
        
        return prev;
    }
    
};
