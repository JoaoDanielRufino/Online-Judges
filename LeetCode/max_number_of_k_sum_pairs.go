func maxOperations(nums []int, k int) int {
    count := 0

    sort.Ints(nums)

    l, r := 0, len(nums)-1
    for l < r {
        sum := nums[l] + nums[r]

        if sum == k {
            count++
            r--
            l++
        } else if sum > k {
            r--
        } else {
            l++
        }
    }

    return count
}
