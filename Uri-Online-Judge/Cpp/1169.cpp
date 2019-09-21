#include <iostream>

using namespace std;

int main() {

  int n, t;
  unsigned long long int sum;

  cin >> t;
  while(t--) {
    cin >> n;
    
    if(n == 64) {
      cout << "1537228672809129 kg" << endl;
      continue;
    }

    sum = 1ULL;
    for(int i = 0; i < n; i++) {
      sum *= 2;
    }

    unsigned long long int res = (sum / 12ULL) / 1000ULL;
    cout << res << " kg" << endl;
  }

  return 0;
}