type Stack struct {
    arr []string
}

func (s *Stack) push(str string) {
    s.arr = append(s.arr, str)
}

func (s *Stack) pop() string {
    size := len(s.arr)
    elem := s.arr[size-1]
    s.arr = s.arr[:size-1]
    return elem
}

func (s *Stack) size() int {
    return len(s.arr)
}

func getWord(s string, i int) string {
    var word strings.Builder

    for i < len(s) && s[i] != ' ' {
        word.WriteByte(s[i])
        i++
    }

    return word.String()
}

func reverseWords(s string) string {
    stack := Stack{
        arr: []string{},
    } 

    i := 0
    for i < len(s) {
        for i < len(s) && s[i] == ' ' {
            i++
        }

        if i >= len(s) {
            break
        }

        word := getWord(s, i)

        stack.push(word)

        i += len(word)
    }

    var reversed strings.Builder

    for stack.size() > 0 {
        if stack.size() == 1 {
            reversed.WriteString(stack.pop())
        } else {
            reversed.WriteString(stack.pop())
            reversed.WriteString(" ")
        }
    }

    return reversed.String()
}
