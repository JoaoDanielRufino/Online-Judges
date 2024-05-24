func canJump(nums []int) bool {
    toReach := len(nums)-1

    for i := len(nums)-2; i >= 0; i-- {
        if nums[i] + i >= toReach {
            toReach = i
        }
    }

    return toReach == 0
}
