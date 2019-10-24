/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    ListNode *tmpA = A;
    ListNode *tmpB = B;
    
    int lenA = 0;
    while(tmpA) {
        tmpA = tmpA->next;
        lenA++;
    }
    
    int lenB = 0;
    while(tmpB) {
        tmpB = tmpB->next;
        lenB++;
    }
    
    tmpA = A;
    tmpB = B;
    int d;
    if(lenA > lenB) {
        d = lenA - lenB;
        while(d--)
            tmpA = tmpA->next;
    }else if(lenB > lenA){
        d = lenB - lenA;
        while(d--)
            tmpB = tmpB->next;
    }
    
    while(tmpA && tmpA != tmpB) {
        tmpA = tmpA->next;
        tmpB = tmpB->next;
    }
    
    return tmpA;
}
