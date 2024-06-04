func isAnagram(s string, t string) bool {
    if len(s) != len(t) {
        return false
    }

    hash := map[byte]int{}

    for i := range t {
        hash[t[i]]++
    }

    for i := range s {
        hash[s[i]]--

        if hash[s[i]] < 0 {
            return false
        }
    }

    return true
}
