func sortColors(nums []int)  {
    colors := [3]int{0, 0, 0}

    for _, num := range nums {
        colors[num]++
    }

    index := 0
    for i := 0; i < len(colors); i++ {
        for colors[i] > 0 {
            nums[index] = i
            index++
            colors[i]--
        }
    }
}
