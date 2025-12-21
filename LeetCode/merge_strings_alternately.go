func mergeAlternately(word1 string, word2 string) string {
    var merged strings.Builder

    i := 0
    for i < len(word1) && i < len(word2) {
        merged.WriteByte(word1[i])
        merged.WriteByte(word2[i])
        i++
    }

    if i < len(word1) {
        merged.WriteString(word1[i:])
    } else if i < len(word2) {
        merged.WriteString(word2[i:])
    }

    return merged.String()
}
