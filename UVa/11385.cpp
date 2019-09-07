#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

unsigned long long int dp[110];

unsigned long long int fib(int n) {
  if(n == 1)
    return 1ULL;

  if(n == 2)
    return 2ULL;

  if(dp[n] != -1)
    return dp[n];

  return dp[n] = fib(n-1) + fib(n-2);
}

int getFibIndex(int fib) {
  for(int i = 1; i < 110; i++) { // Size of dp
    if(dp[i] == fib)
      return i;
  }
}

int main() {

  ios::sync_with_stdio(false); cin.tie(0);
  int t, n, a;
  char *plainText;
  string cipherText, res;
  vector<int> vet;

  memset(dp, -1, sizeof(dp));
  dp[1] = 1;
  dp[2] = 2;
  fib(46); // < 2 power 31

  cin >> n;
  while(n--) {
    cin >> t;

    while(t--) {
      cin >> a;
      vet.push_back(a);
    }

    cin.ignore();
    getline(cin, cipherText);

    plainText = new char[100];
    int fib = 0;
    for(int i = 0; i < cipherText.size(); i++) {
      if(cipherText[i] >= 'A' && cipherText[i] <= 'Z') {
        int pos = getFibIndex(vet[fib++]);
        plainText[pos-1] = cipherText[i];
      }
      if(fib >= vet.size())
        break;
    }

    int i = 0;
    int count = 0; // vet.size() indicates the number of characters to be inserted
    while(i < 100 && count < vet.size()) {
      if(plainText[i] == '\0' && i+1 >= 100)
        break;
      else if(plainText[i] == '\0') {
        cout << " ";
        i++;
      }
      else {
        cout << plainText[i++];
        count++;
      }
    }

    cout << endl;
    cipherText.clear();
    vet.clear();
  }

  return 0;
}