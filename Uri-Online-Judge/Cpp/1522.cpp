#include <iostream>
#include <string.h>

using namespace std;

int mat[101][3], n;
int dp[101][101][101];

bool solve(int i, int j, int k) {
  if(i == n && j == n && k == n)
    return true;

  if(i > n || j > n || k > n)
    return false;

  if(dp[i][j][k] != -1)
    return dp[i][j][k];

  if(!(mat[i][0] % 3)) {
    if(solve(i + 1, j, k))
      return dp[i][j][k] = true;
  }
  if(!((mat[i][0] + mat[j][1]) % 3)) {
    if(solve(i + 1, j + 1, k))
      return dp[i][j][k] = true;
  }
  if(!((mat[i][0] + mat[j][1] + mat[k][2]) % 3)) {
    if(solve(i + 1, j + 1, k + 1))
      return dp[i][j][k] = true;
  }
  if(!((mat[i][0] + mat[k][2]) % 3)) {
    if(solve(i + 1, j, k + 1))
      return dp[i][j][k] = true;
  }
  if(!(mat[j][1] % 3)) {
    if(solve(i, j + 1, k))
      return dp[i][j][k] = true;
  }
  if(!((mat[j][1] + mat[k][2]) % 3)) {
    if(solve(i, j + 1, k + 1))
      return dp[i][j][k] = true;
  }
  if(!(mat[k][2] % 3)) {
    if(solve(i, j, k + 1))
      return dp[i][j][k] = true;
  }

  return dp[i][j][k] = false;
}

int main() {

  while(cin >> n && n) {
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < 3; j++) {
        cin >> mat[i][j];
      }
    }

    memset(dp, -1, sizeof(dp));
    cout << solve(0, 0, 0) << endl;
  }

  return 0;
}