func largestAltitude(gain []int) int {
    altitude, maxAltitude := 0, 0

    for i := range gain {
        altitude += gain[i]
        maxAltitude = max(maxAltitude, altitude)
    }

    return maxAltitude
}
