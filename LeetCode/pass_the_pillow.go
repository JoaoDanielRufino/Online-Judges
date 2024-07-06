func passThePillow(n int, time int) int {
    fullRounds := time / (n - 1)
    remaining := time % (n - 1)

    if fullRounds % 2 == 0 {
        return remaining + 1
    }

    return n - remaining
}
