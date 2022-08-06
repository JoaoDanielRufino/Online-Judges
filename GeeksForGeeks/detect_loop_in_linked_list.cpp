class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        set<Node*> st;
        Node* curr;
        
        curr = head;
        while(curr) {
            if(st.count(curr))
                return true;
            st.insert(curr);
            curr = curr->next;
        }
        
        return false;
    }
};

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node *slow, *fast;
        
        slow = head;
        fast = head;
        while(slow && fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                return true;
        }
        
        return false;
    }
};
