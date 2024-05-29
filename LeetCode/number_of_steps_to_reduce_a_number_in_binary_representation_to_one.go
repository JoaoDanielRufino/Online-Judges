func addOne(s string) string {
    b := []byte(s)
    
    for i := len(b)-1; i >= 0; i-- {
        if b[i] == '0' {
            b[i] = '1'
            return string(b)
        }

        if b[i] == '1' {
            b[i] = '0'
        }
    }

    return "1" + string(b)
}

func divedeByTwo(s string) string {
    return s[:len(s)-1]
}

func numSteps(s string) int {
    count := 0

    for s != "1" {
        lastPos := len(s)-1

        if s[lastPos] == '1' {
            s = addOne(s)
        } else {
            s = divedeByTwo(s)
        }

        count++
    }

    return count
}
