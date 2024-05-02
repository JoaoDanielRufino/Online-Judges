func findMaxK(nums []int) int {
    ans := -1
    hash := map[int]bool{}

    for _, num := range nums {
        if num < 0 {
            hash[num * -1] = true
        }
    }

    for _, num := range nums {
        if num > ans && hash[num] {
            ans = num
        }
    }

    return ans
}
