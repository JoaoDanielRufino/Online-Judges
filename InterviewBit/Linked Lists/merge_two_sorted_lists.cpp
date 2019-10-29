/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *dummy = new ListNode(0);
    ListNode *head = dummy;
    
    while(A && B) {
        if(A->val < B->val) {
            dummy->next = new ListNode(A->val);
            A = A->next;
        }
        else {
            dummy->next = new ListNode(B->val);
            B = B->next;
        }
        dummy = dummy->next;
    }
    
    if(A)
        dummy->next = A;
    else if(B)
        dummy->next = B;
        
    return head->next;
}
