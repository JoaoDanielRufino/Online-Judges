func judgeSquareSum(c int) bool {
    l, r := 0, int(math.Sqrt(float64(c)))

    for l <= r {
        sum := (l * l) + (r * r)

        if sum == c {
            return true
        }

        if sum < c {
            l++
        } else {
            r--
        }
    }

    return false
}
