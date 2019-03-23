#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(false); cin.tie(0);
  int n,m;
  string nome,as;
  map<string,string> mymap;

  while(cin >> n, n){
    for(int i = 0; i < n; i++){
      cin >> nome;
      cin >> as;
      mymap[nome] = as;
    }

    int count = 0;
    cin >> m;
    for(int i = 0; i < m; i++){
      cin >> nome;
      cin >> as;

      int aux = 0;
      string tmp = mymap[nome];
      for(int j = 0; j < as.size(); j++){
        if(as[j] != tmp[j])
          aux++;
        if(aux >= 2){
          count++;
          break;
        }
      }
    }

    cout << count << endl;
    mymap.clear();
  }


  return 0;
}
