func maximumImportance(n int, roads [][]int) int64 {
    degree := make([]int, n)

    for _, road := range roads {
        a, b := road[0], road[1]
        degree[a]++
        degree[b]++
    }

    sort.Ints(degree)

    var importance int64 = 0
    for i := range degree {
        importance += int64((i+1) * degree[i])
    }

    return importance
}
