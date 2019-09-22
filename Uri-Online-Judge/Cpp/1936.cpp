#include <iostream>
#include <string.h>

using namespace std;

int dp[11];

int fat(int n) {
  if(!n)
    return 1;

  if(dp[n] != -1)
    return dp[n];

  return dp[n] = n * fat(n-1);
}

int main() {

  int n, count = 0;

  memset(dp, -1, sizeof(dp));
  dp[0] = 1;
  fat(10);

  cin >> n;

  int i = 10;
  while(n != 0 && i > 0) {
    if(dp[i] <= n) {
      //cout << dp[i] << " ";
      n -= dp[i];
      count++;
    }
    if(dp[i] > n)
      i--;
  }

  cout << count << endl;

  return 0;
}