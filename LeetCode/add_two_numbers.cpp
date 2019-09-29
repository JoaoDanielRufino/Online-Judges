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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *aux = new ListNode(0);
        ListNode *head = aux;
        int carry = 0;
        
        while(1) {
            if(!l1 && !l2)
                break;
            if(!l1)
                l1 = new ListNode(0);
            if(!l2)
                l2 = new ListNode(0);
            
            int sum = l1->val + l2->val + carry;            
            carry = sum / 10;
         
            aux->next = new ListNode(sum % 10);
            aux = aux->next;
                       
            l1 = l1->next;
            l2 = l2->next;
        }
        
        if(carry) {
            aux->next = new ListNode(1);
        }
        
        return head->next;
    }
};