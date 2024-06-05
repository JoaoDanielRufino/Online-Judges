func commonChars(words []string) []string {
    n := len(words)
    wordsHash := make([][26]int, n)

    for i, word := range words {
        for j := range word {
            wordsHash[i][word[j] - 'a']++
        }
    }

    ans := []string{}
    for i := range words[0] {
        ok := true
        letter := words[0][i] - 'a'

        for j := range wordsHash {
            if wordsHash[j][letter] == 0 {
                ok = false
                break
            }
            wordsHash[j][letter]--
        }

        if ok {
            ans = append(ans, string(words[0][i]))
        }
    }

    return ans
}
