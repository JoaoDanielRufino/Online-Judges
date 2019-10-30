/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    if(!A->next)
        return A;
    
    ListNode *curr = A;
    ListNode *prev = A;
    
    while(B--) {
        if(!curr->next)
            curr = A;
        else
            curr = curr->next;
    }
    
    if(curr == A)
        return A;
        
    while(curr->next) {
        prev = prev->next;
        curr = curr->next;
    }
    
    ListNode *res = prev->next;
    prev->next = nullptr;
    curr->next = A;
    
    return res;
}
