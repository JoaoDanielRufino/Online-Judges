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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        
        ListNode *aux;
        
        if(l1->val < l2->val) {
            aux = new ListNode(l1->val);
            l1 = l1->next;
        }
        else {
            aux = new ListNode(l2->val);
            l2 = l2->next;
        }
        
        ListNode *head = aux;
        
        while(l1 && l2) {
            if(l1->val < l2->val) {
                aux->next = l1;
                aux = aux->next;
                l1 = l1->next;
            }
            else {
                aux->next = l2;
                aux = aux->next;
                l2 = l2->next;
            }
        }
    
        if(l1)
            aux->next = l1;
        else if(l2)
            aux->next = l2;
        
        return head;
    }
};