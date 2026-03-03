func abs(a int) int {
    if a >= 0 {
        return a
    }

    return -a
}

func sortedSquares(nums []int) []int {
    ans := make([]int, len(nums))
    l, r := 0, len(nums)-1

    for i := len(nums)-1; i >= 0; i-- {
        if abs(nums[l]) > abs(nums[r]) {
            ans[i] = nums[l] * nums[l]
            l++
        } else {
            ans[i] = nums[r] * nums[r]
            r--
        }
    }

    return ans
}
