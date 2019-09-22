#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  int n, k, a, count;
  vector<int> vet;

  cin >> n;
  cin >> k;
  while(n--) {
    cin >> a;
    vet.push_back(a);
  }

  sort(vet.begin(), vet.end());

  count = k;

  int i = vet.size() - (k + 1);
  while(i >= 0 && vet[i] == vet[i+1]) {
    count++;
    i--;
  }

  cout << count << endl;

  return 0;
}