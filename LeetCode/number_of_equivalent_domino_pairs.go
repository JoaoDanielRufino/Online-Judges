func numEquivDominoPairs(dominoes [][]int) int {
    count := 0
    seen := map[int]int{}

    for _, domino := range dominoes {
        ordered := min(domino[0], domino[1]) * 10 + max(domino[0], domino[1])

        if seen[ordered] > 0 {
            count += seen[ordered]
        }

        seen[ordered]++
    }

    return count
}
