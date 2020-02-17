/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head)
            return;
        
        stack<ListNode*> st;
        int size = 0;
        ListNode *curr = head;
        while(curr) {
            st.push(curr);
            curr = curr->next;
            size++;
        }
        
        size = size/2;
        curr = head;
        while(size) {
            ListNode *tail = st.top();
            st.pop();
            
            ListNode *tmp = curr->next;
            curr->next = tail;
            tail->next = tmp;
            curr = tmp;
            size--;
        }
        curr->next = nullptr;
    }
};