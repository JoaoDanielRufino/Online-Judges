func plusOne(digits []int) []int {
    carry, i := 0, len(digits)-1

    digits[i]++
    for i >= 0 {
        digits[i] += carry

        if digits[i] >= 10 {
            digits[i] = 0
            carry = 1
        } else {
            carry = 0
            break
        }

        i--
    }

    if carry == 1 {
        digits = append([]int{1}, digits...)
    }

    return digits
}
