func findThePrefixCommonArray(A []int, B []int) []int {
    seenA, seenB := map[int]bool{}, map[int]bool{}
    ans := make([]int, len(A))
    count := 0

    for i := range A {
        seenA[A[i]] = true
        seenB[B[i]] = true

        if A[i] != B[i] {
            if seenB[A[i]] {
                count++
            }

            if seenA[B[i]] {
                count++
            }
        } else {
            count++
        }

        ans[i] = count
    }

    return ans
}
