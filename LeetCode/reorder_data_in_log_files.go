type LetterLog struct {
    id string
    log string
    pos int
}

func reorderLogFiles(logs []string) []string {
    digitLogs := []string{} 
    letterLogs := []LetterLog{}
    
    for i, log := range logs {
        if log[len(log)-1] >= '0' && log[len(log)-1] <= '9' {
            digitLogs = append(digitLogs, log)
        } else {
            firstSpace := strings.Index(log, " ")
            letterLog := LetterLog{
                id: log[:firstSpace],
                log: log[firstSpace:],
                pos: i,
            }
            letterLogs = append(letterLogs, letterLog) 
        }
    }
    
    sort.Slice(letterLogs, func(i, j int) bool {
        if letterLogs[i].log == letterLogs[j].log {
            return letterLogs[i].id < letterLogs[j].id
        }
        
        return letterLogs[i].log < letterLogs[j].log
    })
    
    ans := make([]string, 0, len(logs)) 
    for _, letterLog := range letterLogs {
        ans = append(ans, logs[letterLog.pos])
    }
    
    ans = append(ans, digitLogs...)
    
    return ans
}
