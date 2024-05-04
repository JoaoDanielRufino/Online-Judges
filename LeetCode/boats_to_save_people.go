func numRescueBoats(people []int, limit int) int {
    ans := 0

    sort.Ints(people)

    i, j := 0, len(people) - 1
    for i <= j {
        sum := people[i] + people[j]

        if sum <= limit {
            i++
        }

        ans++
        j--
    }

    return ans
}
