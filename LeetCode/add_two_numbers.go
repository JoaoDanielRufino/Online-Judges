/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
    ans := &ListNode{}
    curr1, curr2, currAns := l1, l2, ans

    carry := 0
    for curr1 != nil || curr2 != nil {
        a, b := 0, 0

        if curr1 != nil {
            a = curr1.Val
            curr1 = curr1.Next
        }

        if curr2 != nil {
            b = curr2.Val
            curr2 = curr2.Next
        }

        sum := a + b + carry
        
        if sum >= 10 {
            sum = sum % 10
            carry = 1
        } else {
            carry = 0
        }

        currAns.Next = &ListNode{
            Val: sum,
            Next: nil,
        }
        currAns = currAns.Next
    }

    if carry == 1 {
        currAns.Next = &ListNode{
            Val: 1,
            Next: nil,
        }
    }

    return ans.Next
}
