func findMaxAverage(nums []int, k int) float64 {
    sum, maxSum := 0, -2147483648

    for i := range nums {
        sum += nums[i]

        if i >= (k - 1) {
            maxSum = max(maxSum, sum)
            sum -= nums[i - (k - 1)]
        }
    }

    return float64(maxSum) / float64(k)
}
