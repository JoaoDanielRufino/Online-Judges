#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {

  int t, n, d, x, y, w, killed[1025][1025];
  int maxK, a, b;

  cin >> t;
  while(t--) {
    memset(killed, 0, sizeof(killed));

    cin >> d;
    cin >> n;
    while(n--) {
      cin >> x >> y >> w;
      for(int i = x - d; i <= x + d; i++) {
        if(i < 0 || i >= 1025)
          continue;
        for(int j = y - d; j <= y + d; j++) {
          if(j < 0 || j >= 1025)
            continue;
          killed[i][j] += w;
        }
      }
    }

    maxK = -1;
    for(int i = 0; i < 1025; i++) {
      for(int j = 0; j < 1025; j++) {
        if(killed[i][j] > maxK) {
          maxK = killed[i][j];
          a = i;
          b = j;
        }
      }
    }

    cout << a << " " << b << " " << maxK << endl;
  }

  return 0;
}