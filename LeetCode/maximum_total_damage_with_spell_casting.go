func max64(a, b int64) int64 {
    if a < b {
        return b
    }

    return a
}

func bs(power []int, target int) int {
    ans := len(power)
    l, r := 0, len(power)-1

    for l <= r {
        mid := (l + r) / 2

        if power[mid] >= target {
            ans = mid
            r = mid - 1
        } else {
            l = mid + 1
        }
    }

    return ans
}

func solve(power []int, i int, count map[int]int, dp map[int]int64) int64 {
    if i >= len(power) {
        return 0
    }

    if val, ok := dp[i]; ok {
        return val
    }

    damage := int64(power[i] * count[power[i]])

    nextIndex := bs(power, power[i] + 3)

    dp[i] = max64(solve(power, i + count[power[i]], count, dp), damage + solve(power, nextIndex, count, dp))

    return dp[i]
}

func maximumTotalDamage(power []int) int64 {
    count := map[int]int{}

    sort.Ints(power)

    for _, val := range power {
        count[val]++
    }

    return solve(power, 0, count, map[int]int64{})
}
