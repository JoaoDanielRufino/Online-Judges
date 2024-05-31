func minSubArrayLen(target int, nums []int) int {
    l, r, sum, ans := 0, 0, 0, math.MaxInt

    for r < len(nums) {
        sum += nums[r]

        for sum >= target {
            if ans > (r-l)+1 {
                ans = (r-l)+1
            }
            sum -= nums[l] 
            l++
        }

        r++
    } 

    if ans == math.MaxInt {
        return 0
    }

    return ans
}
