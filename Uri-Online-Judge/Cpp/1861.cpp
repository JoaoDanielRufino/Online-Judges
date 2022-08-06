#include <iostream>
#include <map>

using namespace std;

int main() {

  ios::sync_with_stdio(false); cin.tie(0);
  map<string, int> mp;
  map<string, int>::iterator it;
  string murder, murdered;

  while(cin >> murder >> murdered) {
    mp[murdered] = -1;

    if(mp[murder] != -1)
      mp[murder]++;
  }

  cout << "HALL OF MURDERERS" << endl;
  for(it = mp.begin(); it != mp.end(); ++it) {
    if(it->second != -1)
      cout << it->first << " " << it->second << endl;
  }

  return 0;
}
