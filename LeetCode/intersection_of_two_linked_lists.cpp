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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0, lenB = 0;
        
        ListNode *curr = headA;
        while(curr) {
            curr = curr->next;
            lenA++;
        }
        
        curr = headB;
        while(curr) {
            curr = curr->next;
            lenB++;
        }
        
        int diff = abs(lenA - lenB);
        ListNode *currA = headA, *currB = headB;
        if(lenA > lenB) {
            while(diff--)
                currA = currA->next;
        }
        else if(lenB > lenA) {
            while(diff--)
                currB = currB->next;
        }
        
        while(currA && currB) {
            if(currA == currB)
                return currA;
            currA = currA->next;
            currB = currB->next;
        }
        
        return nullptr;
    }
};