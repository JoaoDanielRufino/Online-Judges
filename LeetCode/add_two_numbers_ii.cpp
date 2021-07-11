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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> st1, st2;
        ListNode* tmp;
        
        tmp = l1;
        while(tmp) {
            st1.push(tmp->val);
            tmp = tmp->next;
        }
        
        tmp = l2;
        while(tmp) {
            st2.push(tmp->val);
            tmp = tmp->next;
        }
        
        int carry = 0;
        vector<int> aux;
        while(!st1.empty() || !st2.empty()) {
            int sum = carry;
            if(!st1.empty()) {
                sum += st1.top();
                st1.pop();
            }
            if(!st2.empty()) {
                sum += st2.top();
                st2.pop();
            }
            
            if(sum < 10) {
                aux.push_back(sum);
                carry = 0;
            }
            else {
                aux.push_back(sum % 10);
                carry = 1;
            }
        }
        
        if(carry)
            aux.push_back(1);
        
        ListNode *res = new ListNode(-1);
        tmp = res;
        for(int i = aux.size()-1; i >= 0; i--) {
            tmp->next = new ListNode(aux[i]);
            tmp = tmp->next;
        }
        
        return res->next;
    }
};
