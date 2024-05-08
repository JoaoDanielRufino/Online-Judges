type Score struct {
    Score int
    Pos int
}

func findRelativeRanks(score []int) []string {
    ranks := []string{"Gold Medal", "Silver Medal", "Bronze Medal"}
    var scores []Score

    for i := 0; i < len(score); i++ {
        scores = append(scores, Score{score[i], i})
    }

    sort.Slice(scores, func(i, j int) bool {
        return scores[i].Score > scores[j].Score
    })

    ans := make([]string, len(scores))
    for i := 0; i < len(scores); i++ {
        if i < len(ranks) {
            ans[scores[i].Pos] = ranks[i]
        } else {
            ans[scores[i].Pos] = strconv.Itoa(i+1)
        }
    }

    return ans
}
