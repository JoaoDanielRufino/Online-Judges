func checkIfExist(arr []int) bool {
    seen := map[int]bool{}

    for _, num := range arr {
        if seen[2 * num] || (num % 2 == 0 && seen[num / 2]) {
            return true
        }

        seen[num] = true
    }

    return false
}
