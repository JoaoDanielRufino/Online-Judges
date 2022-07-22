#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string str;

  cin >> n;

  while(n--) {
    cin >> str;

    string s1 = str.substr(2, 2);
    string s2 = str.substr(5, 3); 
    string s3 = str.substr(11);

    int n1 = stoi(s1);
    int n2 = stoi(s2);
    int n3 = stoi(s3);

    cout << n1 + n2 + n3 << endl;
  }

  return 0;
}
