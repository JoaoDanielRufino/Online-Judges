func min(a, b int) int {
    if a < b {
        return a
    }

    return b
}

func solve(nums []int, index int, dp map[int]int) int {
    if index >= len(nums)-1 {
        return 0
    }

    if val, ok := dp[index]; ok {
        return val
    }

    ans := len(nums)
    for i := 1; i <= nums[index]; i++ {
        ans = min(ans, 1 + solve(nums, index + i, dp))
    }

    dp[index] = ans

    return ans
}

func jump(nums []int) int {
    dp := map[int]int{}
    return solve(nums, 0, dp)
}
