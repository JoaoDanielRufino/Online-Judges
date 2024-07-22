func solve(rating []int, pos int, curr []int, state int, dp map[string]int) int {
    if len(curr) == 3 {
        return 1
    }
    
    key := fmt.Sprintf("%d_%d_%d", pos, len(curr), state)
    if val, ok := dp[key]; ok {
        return val
    }
    
    ans := 0
    for i := pos; i < len(rating); i++ {
        sizeCurr := len(curr)
        if sizeCurr == 0 {
            ans += solve(rating, i+1, append(curr, rating[i]), 0, dp)
        } else {
            if sizeCurr == 1 && curr[0] != rating[i] {
                if rating[i] > curr[0] {
                    state = 1
                } else {
                    state = 2
                }
                ans += solve(rating, i+1, append(curr, rating[i]), state, dp)
            } else if sizeCurr == 2 {
                if curr[0] < curr[1] && curr[1] < rating[i] {
                    ans += solve(rating, i+1, append(curr, rating[i]), 1, dp)
                } else if curr[0] > curr[1] && curr[1] > rating[i] {
                    ans += solve(rating, i+1, append(curr, rating[i]), 2, dp)
                }
            }
        }
    } 
    
    dp[key] = ans
    
    return ans
}

func numTeams(rating []int) int {
    dp := map[string]int{}
    
    return solve(rating, 0, []int{}, 0, dp)   
}
