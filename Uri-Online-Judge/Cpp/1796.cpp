#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(false); cin.tie(0);
  int n,a;
  vector<int> vet(2);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    vet[a]++;
  }

  cout << (vet[0] > vet[1] ? 'Y' : 'N') << endl;

  return 0;
}
