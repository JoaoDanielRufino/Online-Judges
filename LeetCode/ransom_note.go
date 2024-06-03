func canConstruct(ransomNote string, magazine string) bool {
    hash := map[byte]int{}

    for i := range magazine {
        hash[magazine[i]]++
    }

    for i := range ransomNote {
        hash[ransomNote[i]]--

        if hash[ransomNote[i]] < 0 {
            return false
        }
    }

    return true
}
