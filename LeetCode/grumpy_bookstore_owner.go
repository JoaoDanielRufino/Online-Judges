func maxSatisfied(customers []int, grumpy []int, minutes int) int {
    satisfaction := 0

    for i := range customers {
        if grumpy[i] == 0 {
            satisfaction += customers[i]
        }
    }

    for i := 0; i < minutes; i++ {
        if grumpy[i] == 1 {
            satisfaction += customers[i]
        }
    }

    ans := satisfaction
    for i := minutes; i < len(customers); i++ {
        if grumpy[i - minutes] == 1 {
            satisfaction -= customers[i - minutes]
        }

        if grumpy[i] == 1 {
            satisfaction += customers[i]
        }

        if satisfaction > ans {
            ans = satisfaction
        }
    }

    return ans
}
