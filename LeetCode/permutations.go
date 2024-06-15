func solve(nums []int, k int, ans *[][]int) {
    if k == len(nums) {
        tmp := make([]int, len(nums))
        copy(tmp, nums)
        *ans = append(*ans, tmp)
    }

    for i := k; i < len(nums); i++ {
        nums[i], nums[k] = nums[k], nums[i]
        solve(nums, k+1, ans)
        nums[i], nums[k] = nums[k], nums[i]
    }
}

func permute(nums []int) [][]int {
    ans := [][]int{}

    solve(nums, 0, &ans)

    return ans
}
