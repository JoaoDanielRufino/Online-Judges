class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node *slow, *fast;
        
        slow = fast = head;
        while(slow && fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                break;
        }
        
        if(slow == fast) {
            slow = head;
            if(slow == fast) {
              while(fast->next != slow)
                fast = fast->next;
            }
              else {
                while(slow->next != fast->next) {
                    slow = slow->next;
                    fast = fast->next;
                }
            }
            fast->next = nullptr;
        }
    }
};
