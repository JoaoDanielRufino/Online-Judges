/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func deleteNode(node *ListNode) {
    curr := node

    for {
        curr.Val = curr.Next.Val

        if curr.Next.Next == nil {
            curr.Next = nil
            break
        }

        curr = curr.Next
    }
}

// Better
func deleteNode(node *ListNode) {
    node.Val = node.Next.Val
    node.Next = node.Next.Next
}
