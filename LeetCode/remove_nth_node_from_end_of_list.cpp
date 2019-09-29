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
    ListNode* myRemove(ListNode* head, int &n) {
        if(head == nullptr)
            return head;
        
        head->next = myRemove(head->next, n);
        
        n--;
        
        if(!n) {
            return head->next;
        }
        
        return head;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        return myRemove(head, n);
    }
};