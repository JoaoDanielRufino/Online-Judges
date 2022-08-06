vector<int> computeLongestPrefixSufix(string pattern) {
  int i = 1, index = 0;
  vector<int> lps(pattern.size(), 0);

  while(i < pattern.size()) {
    if(pattern[i] == pattern[index])
      lps[i++] = ++index;
    else {
      if(index != 0)
        index = lps[index - 1];
      else
        lps[i++] = 0;
    }
  }

  return lps;
}

int solution(string s, string x) {
  int i = 0, j = 0;
  vector<int> lps = computeLongestPrefixSufix(x);

  while(i < s.size() && j < x.size()) {
    if(s[i] == x[j]) {
      i++;
      j++;
    }
    else {
      if(j != 0)
        j = lps[j - 1];
      else
        i++;
    }
  }

  if(j == x.size())
    return i - j;
    
  return -1;
}
