func appendCharacters(s string, t string) int {
    index := 0

    for i := 0; i < len(s); i++ {
        if s[i] == t[index] {
            index++
        }

        if index == len(t) {
            return 0 
        }
    }

    return len(t) - index
}
