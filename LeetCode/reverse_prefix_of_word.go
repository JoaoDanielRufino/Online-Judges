func reverse(word string) string {
    runes := []rune(word)
    i, j := 0, len(word) - 1

    for i < j {
        runes[i], runes[j] = runes[j], runes[i]
        i++
        j--
    }

    return string(runes)
}

func reversePrefix(word string, ch byte) string {
    for i := 0; i < len(word); i++ {
        if word[i] == ch {
            return reverse(word[:i+1]) + word[i+1:]
        }
    }

    return word
}
