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

func averageOfLevels(root *TreeNode) []float64 {
    if root == nil {
        return []float64{}
    }

    queue := &Queue{
        arr: []*TreeNode{root},
    } 

    ans := []float64{}
    for queue.size() > 0 {
        size := queue.size()
        var currVal float64 = 0.0
        for i := 0; i < size; i++ {
            node := queue.pop() 

            currVal += float64(node.Val)

            if node.Left != nil {
                queue.push(node.Left)
            }

            if node.Right != nil {
                queue.push(node.Right)
            }
        }
        ans = append(ans, currVal / float64(size))
    }

    return ans
}
