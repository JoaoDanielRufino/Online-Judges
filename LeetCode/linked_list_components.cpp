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
    int numComponents(ListNode* head, vector<int>& G) {
        set<int> hash(G.begin(), G.end());
        ListNode *curr = head;
        
        int count = 0;
        while(curr) {
            if(hash.count(curr->val) && (!curr->next || !hash.count(curr->next->val)))
                count++;
            curr = curr->next;
        }
        
        return count;
    }
};