func seen[K comparable, V byte | string](m map[K]V, s K) bool {
    _, ok := m[s]

    return ok
}

func wordPattern(pattern string, s string) bool {
    words := strings.Split(s, " ")

    if len(words) != len(pattern) {
        return false
    }

    patternMapping, wordsMapping := map[byte]string{}, map[string]byte{}

    for i := range pattern {
        if seen[byte, string](patternMapping, pattern[i]) && patternMapping[pattern[i]] != words[i] {
            return false
        } else if seen[string, byte](wordsMapping, words[i]) && wordsMapping[words[i]] != pattern[i] {
            return false
        }

        patternMapping[pattern[i]] = words[i]
        wordsMapping[words[i]] = pattern[i]
    }

    return true
}
