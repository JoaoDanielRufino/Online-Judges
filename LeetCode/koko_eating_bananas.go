import "math"

func canEatAllPiles(piles []int, h, k int) bool {
    for _, pile := range piles {
        h -= int(math.Ceil(float64(pile) / float64(k)))
    }

    return h >= 0
}

func minEatingSpeed(piles []int, h int) int {
    maxPile := math.MinInt

    for _, pile := range piles {
        maxPile = max(maxPile, pile)
    }

    l, r, k := 1, maxPile, maxPile
    for l <= r {
        mid := (l + r) / 2

        if canEatAllPiles(piles, h, mid) {
            k = mid
            r = mid - 1
        } else {
            l = mid + 1
        }
    }

    return k
}
