func kidsWithCandies(candies []int, extraCandies int) []bool {
    maxCandiesFound := math.MinInt

    for _, num := range candies {
        maxCandiesFound = max(maxCandiesFound, num) 
    }

    ans := make([]bool, 0, len(candies))
    for _, candy := range candies {
        ans = append(ans, candy + extraCandies >= maxCandiesFound)
    }

    return ans
}
