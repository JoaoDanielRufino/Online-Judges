type People struct {
    name string
    height int
}

func sortPeople(names []string, heights []int) []string {
    people := []People{} 

    for i := range names {
        people = append(people, People{names[i], heights[i]})
    }

    sort.Slice(people, func(i, j int) bool {
        return people[i].height > people[j].height
    })

    ans := []string{}
    for i := range people {
        ans = append(ans, people[i].name)
    }

    return ans
}
