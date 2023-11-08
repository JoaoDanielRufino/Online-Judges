func buildArray(target []int, n int) []string {
    ans := []string{}
    i := 1

    for _, num := range target {
        for i < num {
            ans = append(ans, "Push")
            ans = append(ans, "Pop")
            i++
        }
        ans = append(ans, "Push")
        i++
    }

    return ans
}
