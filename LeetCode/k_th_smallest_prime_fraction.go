type Fraction struct {
    fraction float64
    nums []int
}

func kthSmallestPrimeFraction(arr []int, k int) []int {
    fractions := []Fraction{}

    for i := 0; i < len(arr)-1; i++ {
        for j := i + 1; j < len(arr); j++ {
            fractions = append(fractions, Fraction{
                fraction: float64(arr[i]) / float64(arr[j]),
                nums: []int{arr[i], arr[j]},
            })
        }
    } 

    sort.Slice(fractions, func(i, j int) bool {
        return fractions[i].fraction < fractions[j].fraction
    })

    return fractions[k-1].nums
}
