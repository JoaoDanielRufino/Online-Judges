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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(m == n)
            return head;
        
        ListNode *curr = head, *prev = nullptr;
        while(curr && m > 1) {
            prev = curr;
            curr = curr->next;
            m--;
            n--;
        }
        
        ListNode *st = prev, *tail = curr;
        while(curr && n > 0) {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            n--;
        }
        
        if(st)
            st->next = prev;
        else
            head = prev;
        
        tail->next = curr;
        
        return head;
    }
};