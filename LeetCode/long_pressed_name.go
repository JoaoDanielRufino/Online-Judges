func isLongPressedName(name string, typed string) bool {
    i := 0
    var prev byte
    
    for j := 0; j < len(typed); j++ {
        if i < len(name) && name[i] == typed[j] {
            i++
            prev = typed[j]
        } else if typed[j] != prev {
            return false 
        }
    }
    
    return i == len(name)
}
