func solve(nums []int, ans *[][]int, curr []int, index int) {
    tmp := make([]int, len(curr))
    copy(tmp, curr)
    *ans = append(*ans, tmp)

    for i := index; i < len(nums); i++ {
        curr = append(curr, nums[i])
        solve(nums, ans, curr, i + 1)
        curr = curr[0:len(curr)-1]
    }
}

func subsets(nums []int) [][]int {
    ans := [][]int{}
    solve(nums, &ans, []int{}, 0)
    return ans
}
