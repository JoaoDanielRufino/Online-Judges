func rotate(nums []int, k int)  {
    n := len(nums)
    tmp := make([]int, n)

    k = k % n
    for i := 0; i < n; i++ {
        tmp[(i+k)%n] = nums[i]
    }

    copy(nums, tmp)
}
