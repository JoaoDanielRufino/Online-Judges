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
    ListNode* partition(ListNode* head, int x) {
        ListNode *less, *greater, *curr, *lHead, *gHead;

        less = greater = lHead = gHead = nullptr;
        curr = head;
        while(curr) {
            if(curr->val < x) {
                if(!less) {
                    less = new ListNode(curr->val);
                    lHead = less;
                }
                else {
                    less->next = new ListNode(curr->val);
                    less = less->next;
                }
            }
            else {
                if(!greater) {
                    greater = new ListNode(curr->val);
                    gHead = greater;
                }
                else {
                    greater->next = new ListNode(curr->val);
                    greater = greater->next;
                }
            }
            curr = curr->next;
        }
        
        if(less)
            less->next = gHead;
        else
            return gHead;
        
        return lHead;
    }
};