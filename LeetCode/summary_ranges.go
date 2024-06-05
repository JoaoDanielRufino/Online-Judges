func summaryRanges(nums []int) []string {
    ans := []string{}

    if len(nums) == 0 {
        return ans
    }

    start := 0
    for i := 1; i < len(nums); i++ {
        if nums[i] > nums[i-1]+1 {
            if (i-start) == 1 {
                ans = append(ans, fmt.Sprintf("%d", nums[start]))
            } else {
                ans = append(ans, fmt.Sprintf("%d->%d", nums[start], nums[i-1]))
            }
            start = i
        }
    }

    if (len(nums)-start) == 1 {
        ans = append(ans, fmt.Sprintf("%d", nums[start]))
    } else {
        ans = append(ans, fmt.Sprintf("%d->%d", nums[start], nums[len(nums)-1]))
    }

    return ans
}
