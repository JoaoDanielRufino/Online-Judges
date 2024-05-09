func maximumHappinessSum(happiness []int, k int) int64 {
    var ans int64 = 0

    sort.Sort(sort.Reverse(sort.IntSlice(happiness)))

    for i := 0; i < k; i++ {
        diff := happiness[i] - i

        if diff <= 0 {
            break
        } 

        ans += int64(diff)
    }

    return ans
}
