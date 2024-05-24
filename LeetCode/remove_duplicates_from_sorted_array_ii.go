func removeDuplicates(nums []int) int {
    pos, prev, count := 1, nums[0], 1

    for i := 1; i < len(nums); i++ {
        if prev != nums[i] {
            prev = nums[i]     
            count = 1
        } else {
            count++
        }

        if count <= 2 {
            nums[pos] = nums[i]
            pos++
        }
    }

    return pos
}
