int alternatingCharacters(string s) {
    int a = false, b = false, count = 0;
    
    for(char c : s) {
        if(c == 'A' && !a) {
            a = true;
            b = false;
        } else if(c == 'B' && !b) {
            b = true;
            a = false;
        } else if(c == 'A' && a) {
            count++;
        } else if(c == 'B' && b) {
            count++;
        }
    }
    
    return count;
}
