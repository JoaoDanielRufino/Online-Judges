type pair struct {
    a, b int
}

var mod = 1000000007

func solve(start, end, k int, dp map[pair]int) int {
    if k == 0 {
        if start == end {
            return 1
        }
        return 0
    }

    p := pair{
        start,
        k,
    }

    if val, ok := dp[p]; ok {
        return val
    }

    dp[p] = (solve(start + 1, end, k - 1, dp) + solve(start - 1, end, k - 1, dp)) % mod

    return dp[p]
}

func numberOfWays(startPos int, endPos int, k int) int {
    dp := map[pair]int{}
    return solve(startPos, endPos, k, dp) 
}
