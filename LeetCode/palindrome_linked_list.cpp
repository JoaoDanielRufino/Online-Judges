// Solution 1
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
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        
        ListNode *curr = head;
        while(curr) {
            st.push(curr->val);
            curr = curr->next;
        }
        
        curr = head;
        while(curr) {
            if(curr->val != st.top())
                return false;
            st.pop();
            curr = curr->next;
        }
        
        return true;
    }
};

// Solution 2
class Solution {
public:
    int res;
    ListNode *q;
    
    void solve(ListNode* p) {
        if(!p)
            return;
        
        solve(p->next);
        
        if(p->val != q->val) {
            res = false;
            return;
        }
        
        q = q->next;
    }
    
    bool isPalindrome(ListNode* head) {
        res = true;
        q = head;
        
        solve(head);
        
        return res;
    }
};