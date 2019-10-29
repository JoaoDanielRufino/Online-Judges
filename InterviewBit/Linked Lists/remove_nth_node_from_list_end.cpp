/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *tmp = A;
    ListNode *aux = A;
    
    while(B-- && aux)
        aux = aux->next;
        
    if(!aux) {
        A = A->next;
        return A;
    }
    
    while(aux->next) {
        tmp = tmp->next;
        aux = aux->next;
    }
    
    tmp->next = tmp->next->next;
    
    return A;
}
