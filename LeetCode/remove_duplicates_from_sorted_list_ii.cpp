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
            return nullptr;
        
        if(head->next && head->val == head->next->val) {
            while(head->next && head->val == head->next->val)
                head = head->next;
            return deleteDuplicates(head->next);
        }
        
        head->next = deleteDuplicates(head->next);
        return head;
    }
};

/* Or this solution
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)
            return head;
        
        ListNode *newList = new ListNode(-1);
        ListNode *curr = newList;
        ListNode *prev = curr;
        ListNode *rep = nullptr;
        
        while(head) {
            if(head->next && head->val == head->next->val) {
                rep = new ListNode(head->val);
                if(curr->val == head->val)
                    curr = prev;
            }
            else {
                if(!rep || head->val != rep->val) {
                    rep = nullptr;
                    prev = curr;
                    curr->next = new ListNode(head->val);
                    curr = curr->next;
                }
            }
            head = head->next;
        }
        
        return newList->next;
    }
};
*/