#include <iostream>
#include <math.h>

using namespace std;

int main() {

  int d, vf, vg;

  while(cin >> d >> vf >> vg) {
    double tmp = sqrt(pow(12, 2) + pow(d, 2));
    double tf = 12.0 / vf;
    double tg = tmp / vg;

    if(tg <= tf)
      cout << "S" << endl;
    else
      cout << "N" << endl;
  }

  return 0;
}