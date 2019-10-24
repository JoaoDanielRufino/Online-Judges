/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
    ListNode *prev = nullptr;
    ListNode *curr = A;
    
    while(curr) {
        ListNode *tmp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = tmp;
    }
    
    return prev;
}
