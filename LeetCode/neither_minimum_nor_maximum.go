func max(a, b int) int {
    if a < b {
        return b
    }

    return a
}

func min(a, b int) int {
    if a < b {
        return a
    }

    return b
}

func findNonMinOrMax(nums []int) int {
    if len(nums) <= 2 {
        return -1
    }

    a := max(nums[0], max(nums[1], nums[2]))
    b := min(nums[0], min(nums[1], nums[2]))

    if nums[0] != a && nums[0] != b {
        return nums[0]
    }

    if nums[1] != a && nums[1] != b {
        return nums[1]
    }

    return nums[2]
}
