/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

func solve(node *ListNode, carry *int) {
    if node == nil {
        return
    }

    solve(node.Next, carry)

    sum := node.Val * 2 + *carry
    node.Val = sum % 10
    *carry = sum / 10
}

func doubleIt(head *ListNode) *ListNode {
    carry := 0

    solve(head, &carry)

    if carry > 0 {
        return &ListNode{
            Val: carry,
            Next: head,
        }
    }

    return head
}
