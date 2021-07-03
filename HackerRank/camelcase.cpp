int camelcase(string s) {
    int count = 1;
    
    for(char c : s) {
        if(c >= 'A' && c <= 'Z')
            count++;
    }
    
    return count;
}
