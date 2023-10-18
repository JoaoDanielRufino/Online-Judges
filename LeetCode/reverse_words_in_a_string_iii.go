func reverseWords(s string) string {
    var ans string
    splitted := strings.Split(s, " ")

    for i, str := range splitted {
        for j := len(str) - 1; j >= 0; j-- {
            ans += string(str[j])
        }

        if i < len(splitted) - 1 {
            ans += " "
        }
    }

    return ans
}
