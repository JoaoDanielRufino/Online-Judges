func isPalindrome(x int) bool {
    if x < 0 {
        return false
    }

    reversed, aux := 0, x
    for x != 0 {
        reversed = (reversed * 10) + (x % 10)
        x = x / 10
    }

    return reversed == aux
}
