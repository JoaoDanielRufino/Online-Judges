/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *ans, *currAns;
        ans = nullptr;
        
        int sum = 0;
        bool begin = false;
        ListNode *curr = head;
        while(curr) {
            if(!curr->val && !begin) {
                begin = true;
            } else if(!curr->val && begin) {
                if(!ans) {
                    ans = new ListNode(sum);
                    currAns = ans;
                } else {
                    currAns->next = new ListNode(sum);
                    currAns = currAns->next;
                }

                sum = 0;
            }
            
            sum += curr->val;
            curr = curr->next;
        }
        
        return ans;
    }
};
