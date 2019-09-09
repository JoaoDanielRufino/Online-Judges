#include <iostream>
#include <algorithm>

using namespace std;

int main() {

  ios::sync_with_stdio(false); cin.tie(0);
  string str;

  while(cin >> str && str != "#") {
    if(next_permutation(str.begin(), str.end()))
      cout << str << endl;
    else
      cout << "No Successor" << endl;
  }

  return 0;
}