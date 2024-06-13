func abs(a int) int {
    if a < 0 {
        return a * -1
    }

    return a
}

func minMovesToSeat(seats []int, students []int) int {
    sort.Ints(seats) 
    sort.Ints(students) 

    moves := 0
    for i := range seats {
        moves += abs(seats[i] - students[i])
    }

    return moves
}
