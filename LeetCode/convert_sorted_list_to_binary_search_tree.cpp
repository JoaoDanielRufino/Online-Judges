/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* findMid(ListNode* head) {
        ListNode *prev = nullptr, *slow = head, *fast = head;
        
        while(fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(prev)
            prev->next = nullptr;
        
        return slow;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head)
            return nullptr;
        
        ListNode *mid = findMid(head);
        
        TreeNode *node = new TreeNode(mid->val);
        
        if(head == mid)
            return node;
        
        node->left = sortedListToBST(head);
        node->right = sortedListToBST(mid->next);
        
        return node;
    }
};