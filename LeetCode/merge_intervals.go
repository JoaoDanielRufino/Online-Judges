func max(a, b int) int {
    if a < b {
        return b
    }

    return a
}

func merge(intervals [][]int) [][]int {
    sort.Slice(intervals, func(i, j int) bool {
        if intervals[i][0] < intervals[j][0] {
            return true 
        }

        if intervals[i][0] == intervals[j][0] && intervals[i][1] < intervals[j][1] {
            return true
        }

        return false
    })

    ans, lastIndex := [][]int{}, 0
    ans = append(ans, []int{intervals[0][0], intervals[0][1]})
    for i := 1; i < len(intervals); i++ {
        if ans[lastIndex][1] < intervals[i][0] {
            ans = append(ans, []int{intervals[i][0], intervals[i][1]})
            lastIndex++
        } else {
            ans[lastIndex][1] = max(ans[lastIndex][1], intervals[i][1])
        }
    }

    return ans
}
