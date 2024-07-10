func subdomainVisits(cpdomains []string) []string {
    freq := map[string]int{}
    
    for _, cpdomain := range cpdomains {
        tmp := strings.Split(cpdomain, " ")
        
        times, _ := strconv.Atoi(tmp[0])
        domain := tmp[1]
        
        tmp = strings.Split(domain, ".")
        
        var d2, d3 string
        if len(tmp) == 3 {
            freq[domain] += times
            d2 = tmp[1]
            d3 = tmp[2]
        } else {
            d2 = tmp[0]
            d3 = tmp[1]
        }
        
        freq[d2 + "." + d3] += times
        freq[d3] += times
    }
    
    ans := []string{}
    for k, v := range freq {
        ans = append(ans, fmt.Sprintf("%d %s", v, k))
    }
    
    return ans
}
