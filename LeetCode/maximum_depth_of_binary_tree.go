/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func max(a, b int) int {
    if a < b {
        return b
    }

    return a
}

func maxDepth(root *TreeNode) int {
    if root == nil {
        return 0
    }

    return 1 + max(maxDepth(root.Left), maxDepth(root.Right))
}
