func canPlaceBalls(position []int, m, gap int) bool {
    ballsPlaced, prevBallPos := 1, position[0]

    for i := 1; i < len(position); i++ {
        if position[i] - prevBallPos >= gap {
            ballsPlaced++
            prevBallPos = position[i]
        }

        if ballsPlaced == m {
            return true
        }
    }

    return false
}

func maxDistance(position []int, m int) int {
    sort.Ints(position)

    ans, l, r := 0, 1, position[len(position)-1]
    for l <= r {
        mid := (l + r) / 2

        if canPlaceBalls(position, m, mid) {
            ans = mid
            l = mid + 1
        } else {
            r = mid - 1
        }
    }

    return ans
}
