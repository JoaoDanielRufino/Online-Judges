/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *tmp = A;
    
    while(tmp->next) {
        if(tmp->val == tmp->next->val)
            tmp->next = tmp->next->next;
        else
            tmp = tmp->next;
    }
    
    return A;
}
