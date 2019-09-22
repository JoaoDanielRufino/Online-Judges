#include <iostream>

using namespace std;

int main() {

  int a, b, c, a1, a2, a3;

  cin >> a >> b >> c;

  a1 = (2 * b) + (4 * c);
  a2 = (2 * a) + (2 * c);
  a3 = (4 * a) + (2 * b);

  cout << min(a1, min(a2, a3)) << endl;

  return 0;
}