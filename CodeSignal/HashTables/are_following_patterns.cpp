bool solution(vector<string> strings, vector<string> patterns) {
    unordered_map<string, string> patternMap, valueMap;
    
    for(int i = 0; i < strings.size(); i++) {
        if(patternMap.find(patterns[i]) != patternMap.end() && patternMap[patterns[i]] != strings[i])
            return false;
        if(valueMap.find(strings[i]) != valueMap.end() && valueMap[strings[i]] != patterns[i])
            return false;
        patternMap[patterns[i]] = strings[i];
        valueMap[strings[i]] = patterns[i];
    }
    
    return true;
}
