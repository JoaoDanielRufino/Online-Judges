#include <iostream>

using namespace std;

int main() {

  ios::sync_with_stdio(false); cin.tie(0);
  int i, j, aux1, aux2, carry, count;
  string num1, num2;

  while(cin >> num1 >> num2) {
    if(num1 == "0" && num2 == "0")
      break;

    i = num1.size()-1;
    j = num2.size()-1;
    carry = count = 0;
    while(1) {
      if(i >= 0)
        aux1 = num1[i] - '0';
      else
        aux1 = 0;
      if(j >= 0)
        aux2 = num2[j] - '0';
      else
        aux2 = 0;

      if(aux1 + aux2 + carry >= 10) {
        carry = 1;
        count++;
      }
      else {
        carry = 0;
      }

      if(i < 0 && j < 0)
        break;

      if(i >= 0)
        i--;
      if(j >= 0)
        j--;
    }

    if(!count)
      cout << "No carry operation." << endl;
    else if(count == 1)
      cout << "1 carry operation." << endl;
    else
      cout << count << " carry operations." << endl;
  }

  return 0;
}