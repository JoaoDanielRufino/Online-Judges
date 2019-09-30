#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  int n, m, a;
  vector<int> head, knight;

  while(cin >> n >> m && (n && m)) {
    while(n--) {
      cin >> a;
      head.push_back(a);
    }
    while(m--) {
      cin >> a;
      knight.push_back(a);
    }

    sort(head.begin(), head.end());
    sort(knight.begin(), knight.end());

    int i = 0, j = 0, count = 0;
    while(i < head.size() && j < knight.size()) {
      if(head[i] <= knight[j]) {
        count += knight[j];
        i++;
        j++;
      }
      else
        j++;
    }

    if(i < head.size())
      cout << "Loowater is doomed!" << endl;
    else
      cout << count << endl;

    head.clear();
    knight.clear();
  }

  return 0;
}