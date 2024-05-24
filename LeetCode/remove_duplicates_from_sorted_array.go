func removeDuplicates(nums []int) int {
    pos := 1
    prev := nums[0]

    for i := 1; i < len(nums); i++ {
        if prev != nums[i] {
            nums[pos] = nums[i]
            pos++
            prev = nums[i]
        }
    }

    return pos
}
