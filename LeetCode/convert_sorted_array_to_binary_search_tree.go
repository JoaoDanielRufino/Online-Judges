/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func solve(nums []int, l, r int) *TreeNode {
    if l > r {
        return nil
    }

    mid := (l + r) / 2
    leftNode := solve(nums, l, mid-1)
    rightNode := solve(nums, mid+1, r)

    return &TreeNode{
        Val: nums[mid],
        Left: leftNode,
        Right: rightNode,
    } 
}

func sortedArrayToBST(nums []int) *TreeNode {
    return solve(nums, 0, len(nums)-1) 
}
