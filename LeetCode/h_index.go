func hIndex(citations []int) int {
    sort.Ints(citations)

    n := len(citations)
    for i := 0; i < n; i++ {
        if citations[i] >= n-i {
            return n-i
        }
    }

    return 0
}
