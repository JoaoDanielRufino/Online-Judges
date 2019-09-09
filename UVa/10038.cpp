#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main() {

  ios::sync_with_stdio(false); cin.tie(0);
  int n, a;
  vector<int> vet, aux;

  while(cin >> n) {
    for(int i = 0; i < n; i++) {
      cin >> a;
      vet.push_back(a);
      aux.push_back(false);
    }

    string res = "Jolly";

    if(vet.size() != 1) {
      for(int i = 0; i < n-1; i++) {
        int tmp = abs(vet[i] - vet[i+1]);
        if(tmp >= n) {
          break;
        }
        else {
          aux[tmp] = true;
        }
      }

      for(int i = 1; i < n; i++) {
        if(!aux[i]) {
          res = "Not jolly";
          break;
        }
      }
    }

    cout << res << endl;
    vet.clear();
    aux.clear();
  }

  return 0;
}