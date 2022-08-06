#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string str;

  cin >> n;

  while(n--) {
    cin >> str;

    int left = 0, right = 0;
    bool leftComplete = false;
    for(char c : str) {
      if(c == 'a') {
        if(!leftComplete) {
          left++;
        } else {
          right++;
        }
      } else if(c != 'a' && left > 0) {
        leftComplete = true;
      }
    } 

    int aSize = left * right;
    cout << "k";
    while(aSize--)
      cout << "a";

    cout << endl;
  }

  return 0;
}
