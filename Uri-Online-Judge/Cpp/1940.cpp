#include <iostream>
#include <vector>

using namespace std;

int main() {

  ios::sync_with_stdio(false); cin.tie(0);
  int j, r, maxSum = -1, sum, a, res;
  vector<int> vet;

  cin >> j >> r;
  for(int i = 0; i < r*j; i++) {
    cin >> a;
    vet.push_back(a);
  }

  for(int i = 0; i < j; i++) {
    sum = 0;
    for(int k = i; k < r*j; k += j) {
      sum += vet[k];
    }
    if(sum >= maxSum) {
      maxSum = sum;
      res = i+1;
    }
  }

  cout << res << endl;

  return 0;
}