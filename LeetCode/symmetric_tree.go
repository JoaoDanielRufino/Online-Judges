/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func solve(root1 *TreeNode, root2 *TreeNode) bool {
    if root1 == nil && root2 == nil {
        return true
    } 

    if root1 == nil && root2 != nil {
        return false
    }

    if root1 != nil && root2 == nil {
        return false
    }

    return root1.Val == root2.Val && solve(root1.Left, root2.Right) && solve(root1.Right, root2.Left)
}

func isSymmetric(root *TreeNode) bool {
    return solve(root, root)
}
