func findMatrix(nums []int) [][]int {
    var ans [][]int
    counter := map[int]int{}

    for _, num := range nums {
        if counter[num] >= len(ans) {
            ans = append(ans, []int{})
        }

        ans[counter[num]] = append(ans[counter[num]], num)
        counter[num]++
    }

    return ans
}
