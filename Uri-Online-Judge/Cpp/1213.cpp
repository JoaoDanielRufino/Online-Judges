#include <iostream>

using namespace std;

int main() {

  int count, n;
  unsigned long long int tmp;

  while(cin >> n) {
    tmp = 1ULL;
    count = 1;
    while(1) {
      if(!(tmp % n))
        break;
      tmp = (tmp * 10ULL + 1ULL) % n;
      count++;
    }

    cout << count << endl;
  }

  return 0;
}