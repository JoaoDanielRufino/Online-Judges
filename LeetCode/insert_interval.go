func max(a, b int) int {
    if a < b {
        return b
    }

    return a
}

func min(a, b int) int {
    if a < b {
        return a
    }

    return b
}

func insert(intervals [][]int, newInterval []int) [][]int {
    ans := [][]int{}

    i := 0
    for i < len(intervals) && intervals[i][1] < newInterval[0] {
        ans = append(ans, intervals[i])
        i++
    }

    for i < len(intervals) && intervals[i][0] <= newInterval[1] {
        start := min(intervals[i][0], newInterval[0])
        end := max(intervals[i][1], newInterval[1])
        newInterval[0] = start
        newInterval[1] = end
        i++
    }

    ans = append(ans, newInterval)
    ans = append(ans, intervals[i:]...)

    return ans
}
