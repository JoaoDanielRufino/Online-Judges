func heightChecker(heights []int) int {
    expected := make([]int, len(heights)) 

    copy(expected, heights)

    sort.Ints(expected)

    ans := 0
    for i := range heights {
        if heights[i] != expected[i] {
            ans++
        }
    }

    return ans
}
