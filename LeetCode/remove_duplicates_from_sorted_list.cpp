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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return head;
        
        ListNode *curr, *tmp;
        
        curr = head;
        tmp = head->next;
        while(tmp) {
            if(curr->val != tmp->val) {
                curr->next = tmp;
                curr = tmp;
            }
            tmp = tmp->next;
        }
        
        curr->next = nullptr;
        
        return head;
    }
};