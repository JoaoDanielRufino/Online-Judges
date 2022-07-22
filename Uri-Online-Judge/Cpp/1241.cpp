#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string str1, str2;

  cin >> n;

  while(n--) {
    cin >> str1 >> str2;

    if(str2.size() > str1.size()) {
      cout << "nao encaixa" << endl;
      continue;
    }

    string res = "encaixa";
    int j = str1.size() - 1;
    for(int i = str2.size() - 1; i >= 0; i--) {
      if(str1[j--] != str2[i]) {
        res = "nao encaixa";
        break;
      }
    }

    cout << res << endl;
  }

  return 0;
}
