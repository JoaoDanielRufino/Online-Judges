var mod int = 1e9 + 7

func solve(n, absent, late int, dp [][2][3]int) int {
    if absent >= 2 || late >= 3 {
        return 0
    }
    
    if n == 0 {
        return 1
    }

    if dp[n][absent][late] != -1 {
        return dp[n][absent][late]
    }

    ans := (solve(n-1, absent, 0, dp) + // present
            solve(n-1, absent+1, 0, dp) + // absent
            solve(n-1, absent, late+1, dp)) % mod // late

    dp[n][absent][late] = ans

    return ans
}

func checkRecord(n int) int {
    dp := make([][2][3]int, n+1)

	for i := range dp {
		dp[i] = [2][3]int{
			[3]int{-1, -1, -1},
			[3]int{-1, -1, -1},
		}
	}

    return solve(n, 0, 0, dp) 
}
