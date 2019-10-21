#include <iostream>
#include <vector>

using namespace std;

int main() {

  int t, n, p;
  string s;

  cin >> t;
  while(t--) {
    cin >> n;
    cin.ignore();

    p = 0;
    vector<string> mem(n);
    for(int i = 0; i < n; i++) {
      getline(cin, s);
      if(s == "LEFT") {
        mem[i] = s;
        p -= 1;
      }
      else if(s == "RIGHT") {
        mem[i] = s;
        p += 1;
      }
      else {
        int aux = 0;
        for(int k = 0; k < s.size(); k++) {
          if(s[k] >= '0' && s[k] <= '9')
            aux = aux * 10 + (s[k] - '0');
        }
        mem[i] = mem[aux-1];
        if(mem[i] == "LEFT")
          p -= 1;
        else
          p += 1;
      }
    }

    cout << p << endl;
  }

  return 0;
}