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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!k || !head || !head->next)
            return head;
        
        ListNode *curr = head;
        ListNode *prev = curr;
        
        int size = 0;
        while(curr) {
            curr = curr->next;
            size++;
        }
        
        k = k % size;
        curr = head;
        while(k--) {
            if(!curr->next)
                curr = head;
            else
                curr = curr->next;
        }
        
        if(curr == head)
            return head;
        
        while(curr->next) {
            prev = prev->next;
            curr = curr->next;
        }
        
        ListNode *res = prev->next;
        prev->next = nullptr;
        curr->next = head;
        
        return res;
    }
};