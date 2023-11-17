func max(a, b int) int {
    if a < b {
        return b
    }
    return a
}

func minPairSum(nums []int) int {
    sort.Ints(nums)

    i, j := 0, len(nums) - 1
    ans := math.MinInt
    for i <= j {
        ans = max(ans, nums[i] + nums[j])
        i++
        j--
    }

    return ans
}
