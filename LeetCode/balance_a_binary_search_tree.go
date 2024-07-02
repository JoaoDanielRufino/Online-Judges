/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func inorder(root *TreeNode, inorderTree *[]int) {
    if root == nil {
        return
    }

    inorder(root.Left, inorderTree)

    *inorderTree = append(*inorderTree, root.Val)

    inorder(root.Right, inorderTree)
}

func constructTree(inorderTree []int, start, end int) *TreeNode {
    if start > end {
        return nil
    }

    mid := (start + end) / 2

    left := constructTree(inorderTree, start, mid-1)
    right := constructTree(inorderTree, mid+1, end)

    return &TreeNode{inorderTree[mid], left, right}
}

func balanceBST(root *TreeNode) *TreeNode {
    inorderTree := []int{}

    inorder(root, &inorderTree)

    return constructTree(inorderTree, 0, len(inorderTree)-1)
}
