func numWaterBottles(numBottles int, numExchange int) int {
    count := numBottles

    for numBottles >= numExchange {
        consumed := numBottles / numExchange
        count += consumed
        numBottles = consumed + (numBottles % numExchange)
    }

    return count
}
