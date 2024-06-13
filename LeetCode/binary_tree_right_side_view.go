/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

type Queue struct {
    arr []*TreeNode
}

func (q *Queue) push(node *TreeNode) {
    q.arr = append(q.arr, node)
}

func (q *Queue) pop() *TreeNode {
    tmp := q.arr[0]
    q.arr = q.arr[1:]
    return tmp
}

func (q *Queue) size() int {
    return len(q.arr)
}

func rightSideView(root *TreeNode) []int {
    if root == nil {
        return []int{}
    }
    
    queue := &Queue{
        arr: []*TreeNode{root},
    }

    ans := []int{}
    for queue.size() > 0 {
        size := queue.size() 
        for i := 0; i < size; i++ {
            node := queue.pop()

            if i == size-1 {
                ans = append(ans, node.Val)
            } 

            if node.Left != nil {
                queue.push(node.Left)
            }

            if node.Right != nil {
                queue.push(node.Right)
            }
        }
    }

    return ans
}
