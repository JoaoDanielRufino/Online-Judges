// https://www.youtube.com/watch?time_continue=207&v=MRe3UsRadKw

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
        if(!head || !head->next)
            return head;
        
        ListNode *tmp = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        
        return tmp;
    }
};