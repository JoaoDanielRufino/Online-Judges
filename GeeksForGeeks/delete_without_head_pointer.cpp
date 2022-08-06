class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
        if(!del || !del->next)
            return;
            
        Node *tmp = del->next;
        del->data = del->next->data;
        del->next = del->next->next;
        
        delete tmp;
    }

};
