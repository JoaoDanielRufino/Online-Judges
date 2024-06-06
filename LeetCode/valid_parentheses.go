type Stack struct {
    arr []byte
}

func (s *Stack) push(b byte) {
    s.arr = append(s.arr, b) 
}

func (s *Stack) pop() byte {
    last := len(s.arr)-1
    tmp := s.arr[last]
    s.arr = s.arr[:last]
    return tmp
}

func (s Stack) isEmpty() bool {
    return len(s.arr) == 0
}

func isValid(s string) bool {
    stack := Stack{
        arr: []byte{},
    }    

    for i := range s {
        b := s[i]

        if b == '(' || b == '{' || b == '[' {
            stack.push(b)
        } else {
            if stack.isEmpty() {
                return false
            }

            out := stack.pop()

            if b == ')' && out != '(' {
                return false
            }

            if b == '}' && out != '{' {
                return false
            }

            if b == ']' && out != '[' {
                return false
            }
        }
    }

    return stack.isEmpty()
}
