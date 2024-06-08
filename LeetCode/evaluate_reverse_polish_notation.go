type Stack struct {
    arr []int
}

func (s *Stack) push(a int) {
    s.arr = append(s.arr, a)
}

func (s *Stack) pop() int {
    size := len(s.arr)
    tmp := s.arr[size-1]
    s.arr = s.arr[:size-1]
    return tmp
}

func evalRPN(tokens []string) int {
    stack := Stack{
        arr: []int{},
    }

    for _, token := range tokens {
        if token == "+" {
            sum := stack.pop() + stack.pop()
            stack.push(sum)
        } else if token == "-" {
            a, b := stack.pop(), stack.pop()
            sub := b - a
            stack.push(sub)
        } else if token == "*" {
            mult := stack.pop() * stack.pop()
            stack.push(mult)
        } else if token == "/" {
            a, b := stack.pop(), stack.pop()
            div := b / a
            stack.push(div)
        } else {
            number, _ := strconv.Atoi(token)
            stack.push(number)
        }
    }

    return stack.pop() 
}
