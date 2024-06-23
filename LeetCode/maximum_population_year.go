func maximumPopulation(logs [][]int) int {
    pop := [100]int{}

    for _, log := range logs {
        for i := log[0]; i < log[1]; i++ {
            pop[i - 1950]++
        }
    }

    maxPop, year := 0, 0
    for i := range pop {
        if pop[i] > maxPop {
            maxPop = pop[i]
            year = i + 1950
        }
    }

    return year
}
