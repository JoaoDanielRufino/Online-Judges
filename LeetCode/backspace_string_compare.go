func process(s string) string {
    var stack []byte

    for i := 0; i < len(s); i++ {
        if s[i] != '#' {
            stack = append(stack, s[i])
        } else if len(stack) > 0 {
            stack = stack[:len(stack)-1]
        }
    }

    return string(stack)
}

func backspaceCompare(s string, t string) bool {
    s = process(s)
    t = process(t)

    fmt.Println(s)
    fmt.Println(t)

    return s == t
}
