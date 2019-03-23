#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(false); cin.tie(0);
  int n,index;
  string str;

  while(cin >> n, n){
    cin >> str;

    index = 0;
    for(int i = 0; i < n; i++){
      if(str[i] == 'D')
        index = (index+1)%4;
      else if(str[i] == 'E')
        index--;
      if(index < 0)
        index = 3;
    }

    if(!index)
      cout << "N";
    else if(index == 1)
      cout << "L";
    else if(index == 2)
      cout << "S";
    else if(index == 3)
      cout << "O";
    cout << endl;
  }


  return 0;
}
