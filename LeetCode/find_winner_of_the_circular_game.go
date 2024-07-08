func solve(nums []int, curr, k int) int {
    if len(nums) == 1 {
        return nums[0]
    }

    next := (curr + (k - 1)) % len(nums)

    nums = append(nums[:next], nums[next+1:]...)

    return solve(nums, next, k)
}

func findTheWinner(n int, k int) int {
    nums := make([]int, 0, n)

    for i := 1; i <= n; i++ {
        nums = append(nums, i)
    }

    return solve(nums, 0, k)
}
