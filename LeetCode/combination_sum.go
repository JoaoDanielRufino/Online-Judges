func solve(candidates, curr []int, target, start int, ans *[][]int) {
    if target < 0 {
        return
    }

    if target == 0 {
        tmp := make([]int, len(curr))
        copy(tmp, curr)
        *ans = append(*ans, tmp)
        return
    }

    for i := start; i < len(candidates); i++ {
        curr = append(curr, candidates[i])
        solve(candidates, curr, target - candidates[i], i, ans)
        curr = curr[:len(curr)-1]
    }
}

func combinationSum(candidates []int, target int) [][]int {
    ans := [][]int{} 

    solve(candidates, []int{}, target, 0, &ans)

    return ans
}
