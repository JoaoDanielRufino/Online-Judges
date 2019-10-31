int Solution::lengthOfLongestSubstring(string A) {
    int maxLen = 0, currLen = 0;
    map<char, int> mp;
    
    for(int i = 0; i < A.size(); i++) {
        if(!mp.count(A[i]) || i - currLen > mp[A[i]])
            currLen++;
        else {
            maxLen = max(maxLen, currLen);
            currLen = i - mp[A[i]];
        }
        mp[A[i]] = i;
    }
    
    maxLen = max(maxLen, currLen);
    
    return maxLen;
}
