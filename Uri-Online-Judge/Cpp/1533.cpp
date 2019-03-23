#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b){
  return a > b;
}

int main(){

  ios::sync_with_stdio(false); cin.tie(0);
  int n,a;
  vector<int> vet;
  map<int,int> mymap;

  while(cin >> n, n){
    for(int i = 0; i < n; i++){
      cin >> a;
      vet.push_back(a);
      mymap[a] = i+1;
    }

    sort(vet.begin(), vet.end(), comp);
    cout << mymap[vet[1]] << endl;

    vet.clear();
    mymap.clear();
  }

  return 0;
}
