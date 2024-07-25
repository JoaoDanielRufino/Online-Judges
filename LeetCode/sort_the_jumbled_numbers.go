type Pair struct {
    num int
    pos int
}

func convert(mapping []int, num int) int {
    numString := fmt.Sprintf("%d", num)
    converted := ""

    for i := range numString {
        converted += fmt.Sprintf("%d", mapping[numString[i] - '0'])
    }

    ans, _ := strconv.Atoi(converted)

    return ans
}

func sortJumbled(mapping []int, nums []int) []int {
    numsMapping := make([]Pair, len(nums))

    for i, num := range nums {
        numsMapping[i] = Pair{
            num: convert(mapping, num),
            pos: i,
        }
    }

    sort.Slice(numsMapping, func(i, j int) bool {
        if numsMapping[i].num == numsMapping[j].num {
            return numsMapping[i].pos < numsMapping[j].pos
        }

        return numsMapping[i].num < numsMapping[j].num
    }) 

    ans := make([]int, len(nums))
    for i, mapped := range numsMapping {
        ans[i] = nums[mapped.pos]
    }

    return ans
}
