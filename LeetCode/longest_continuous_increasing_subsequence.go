func findLengthOfLCIS(nums []int) int {
    ans, size := 1, 1
    
    for i := 1; i < len(nums); i++ {
        if nums[i] > nums[i-1] {
            size++
            if size > ans {
                ans = size
            }
        } else {
            size = 1
        }
    }
    
    return ans
}
