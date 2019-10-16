#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> vet, int c) {
  int l = -1, r = 0, mid;

  for(int i = 0; i < vet.size(); i++) {
    l = max(l, vet[i]);
    r += vet[i];
  }

  while(l <= r) {
    mid = (l + r) / 2;

    int acc = 0, cam = 1;
    for(int i = 0; i < vet.size(); i++) {
      if(acc + vet[i] <= mid)
        acc += vet[i];
      else {
        cam++;
        acc = vet[i];
      }
    }

    if(cam <= c)
      r = mid-1;
    else
      l = mid+1;
  }

  return l;
}

int main() {

  int n, p, c, f, a;
  vector<int> vet;

  cin >> n;
  while(n--) {
    cin >> p >> c >> f;
    for(int i = 0; i < p; i++) {
      cin >> a;
      vet.push_back(a);
    }

    int res = solve(vet, c);
    cout << res << " $" << (res * c * f) << endl;

    vet.clear();
  }

  return 0;
}