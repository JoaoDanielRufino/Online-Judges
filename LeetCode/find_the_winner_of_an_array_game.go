func max(a, b int) int {
    if a < b {
        return b
    }
    return a
}

func getWinner(arr []int, k int) int {
    maxVal := math.MinInt
    for _, x := range arr {
        maxVal = max(maxVal, x)
    }

    winner := arr[0]
    winCount := 0
    for i := 1; i < len(arr); i++ {
        if winner > arr[i] {
            winCount++
        } else {
            winner = arr[i]
            winCount = 1
        }

        if winCount == k || winner == maxVal {
            break
        }
    }

    return winner
}
