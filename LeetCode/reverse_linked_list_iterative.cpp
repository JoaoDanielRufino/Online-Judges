// https://www.youtube.com/watch?v=sYcOK51hl-A&t=651s

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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        
        while(curr) {
            ListNode *aux = curr->next;
            curr->next = prev;
            prev = curr;
            curr = aux;
        }
        
        return prev;
    }
};