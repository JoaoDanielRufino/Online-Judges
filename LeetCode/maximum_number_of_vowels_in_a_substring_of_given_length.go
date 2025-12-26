func isVowel(b byte) bool {
    lowercase := byte(unicode.ToLower(rune(b)))

    return lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u'
}

func maxVowels(s string, k int) int {
    maxVowels := math.MinInt

    vowels := 0
    for i := range s {
        if isVowel(s[i]) {
            vowels++
        }

        if i >= (k - 1) {
            maxVowels = max(maxVowels, vowels)
            if isVowel(s[i - (k - 1)]) {
                vowels--
            }
        }
    }

    return maxVowels
}
