#include <iostream>

using namespace std;

long long int dp[102][102];
long long int mod = 1000000LL;

long long int solve(int n, int k, int size) {
  if(n < 0 || size > k)
    return 0LL;

  if(!n && size == k)
    return 1LL;

  if(dp[n][size] != -1LL)
    return dp[n][size] % mod;

  long long int aux = 0LL;
  for(int i = 0; i <= n; i++) {
      aux += solve(n - i, k, size + 1);
  }

  return dp[n][size] = aux % mod;
}

int main() {

  int n, k;

  while(cin >> n >> k && (n && k)) {
    for(int i = 0; i <= n; i++) {
      for(int j = 0; j <= k; j++) {
        dp[i][j] = -1LL;
      }
    }

    cout << solve(n, k, 0) << endl;
  }

  return 0;
}