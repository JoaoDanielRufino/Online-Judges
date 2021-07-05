long substrCount(int n, string s) {
    long count = s.size();
    
    for(int i = 0; i < s.size(); i++) {
        char match = s[i];
        int diffIndex = -1;
        for(int j = i + 1; j < s.size(); j++) {
            if(s[j] == match) {
                if(diffIndex == -1 || j - diffIndex == diffIndex - i)
                    count++;
            } else {
                if(diffIndex == -1)
                    diffIndex = j;
                else
                    break;
            }
        }
    }
    
    return count;
}
