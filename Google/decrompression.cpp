// https://techdevguide.withgoogle.com/paths/advanced/compress-decompression/#!
// Input: 2[3[a]b] -> output: aaabaaab
// Input 3[abc]4[ab] -> output: abcabcabcabababab

#include <iostream>

using namespace std;

string decompress(string str) {
  if(str[0] >= 'a' && str[0] <= 'z') {
    return str;
  }

  int num = 0;
  int i = 0;
  while(str[i] != '[')
    num = num * 10 + (str[i++] - '0');

  int k = str.length()-2;
  while(str[k] != ']') {
    if(str[k] == '[') {
      k++;
      break;
    }
    k--;
  }

  string sufix = str.substr(k+1, str.length()-2-k);
  string tmp = decompress(str.substr(i+1, str.length()-sufix.length()-3)) + sufix;
  string aux;
  for(int j = 0; j < num; j++) {
    aux += tmp;
  }

  return aux;
}

int main() {
  string str, res, aux;

  cin >> str;

  for(int i = 0; i < str.length(); i++) {
    aux += str[i];
    if(str[i] == ']' && (str[i+1] == '\0' || (str[i+1] >= '1' && str[i+1] <= '9'))) {
      res += decompress(aux);
      aux.clear();
    }
  }

  cout << res << endl;

  return 0;
}