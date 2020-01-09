/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* helper(ListNode* A) {
    ListNode *prev = nullptr, *slow = A, *fast = A;
    
    while(fast && fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    if(prev)
        prev->next = nullptr;
        
    return slow;
} 

TreeNode* Solution::sortedListToBST(ListNode* A) {
    if(!A)
        return nullptr;
        
    ListNode *mid = helper(A);
    
    TreeNode *node = new TreeNode(mid->val);
    
    if(A == mid)
        return node;
    
    node->left = sortedListToBST(A);
    node->right = sortedListToBST(mid->next);
    
    return node;
}
