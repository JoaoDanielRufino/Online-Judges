#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> vet) {
  int maxSum = vet[0];
  int currentSum = vet[0];

  for(int i = 1; i < vet.size(); i++) {
    currentSum = max(vet[i], currentSum + vet[i]);
    maxSum = max(maxSum, currentSum);
  }

  return maxSum;
}

int main() {

  ios::sync_with_stdio(false); cin.tie(0);
  int n, a;
  vector<int> vet;

  while(cin >> n && n) {
    while(n--) {
      cin >> a;
      vet.push_back(a);
    }

    int res = solve(vet);

    if(res > 0)
      cout << "The maximum winning streak is " << res << "." << endl;
    else
      cout << "Losing streak." << endl;

    vet.clear();
  }

  return 0;
}