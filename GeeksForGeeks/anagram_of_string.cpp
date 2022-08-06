int remAnagram(string str1, string str2)
{
    int ans = 0;
    vector<int> a(26), b(26);
    
    for(char c : str1)
        a[c - 'a']++;
    for(char c : str2)
        b[c - 'a']++;
    
    for(int i = 0; i < a.size(); i++) {
        ans += abs(a[i] - b[i]);
    }
    
    return ans;
}
