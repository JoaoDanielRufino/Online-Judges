func max(a, b int) int {
    if a < b {
        return b
    }

    return a
}

func averageWaitingTime(customers [][]int) float64 {
    idle, ans := 0, 0

    for _, customer := range customers {
        idle = max(idle, customer[0]) + customer[1]

        ans += idle - customer[0]
    } 

    return float64(ans) / float64(len(customers))
}
