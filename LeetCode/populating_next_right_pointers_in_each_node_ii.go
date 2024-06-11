/**
 * Definition for a Node.
 * type Node struct {
 *     Val int
 *     Left *Node
 *     Right *Node
 *     Next *Node
 * }
 */

type Queue struct {
    arr []*Node
}

func (q *Queue) push(node *Node) {
    q.arr = append(q.arr, node)
}

func (q *Queue) pop() *Node {
    node := q.arr[0]
    q.arr = q.arr[1:]
    return node
}

func (q *Queue) top() *Node {
    return q.arr[0]
}

func (q *Queue) size() int {
    return len(q.arr)
}

func connect(root *Node) *Node {
    if root == nil {
        return nil
    }

    queue := Queue{
        arr: []*Node{root},
    }

    for queue.size() > 0 {
        size := queue.size()
        for i := 0; i < size; i++ {
            curr := queue.pop()

            if i < size-1 {
                curr.Next = queue.top()
            }

            if curr.Left != nil {
                queue.push(curr.Left)
            }

            if curr.Right != nil {
                queue.push(curr.Right)
            }
        }
    }

    return root
}
