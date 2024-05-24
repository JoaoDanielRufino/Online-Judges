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

func maxProfit(prices []int) int {
    profit := 0
    minNum := prices[0]

    for i := 1; i < len(prices); i++ {
        profit = max(profit, prices[i] - minNum) 
        minNum = min(minNum, prices[i])
    }

    return profit
}
