#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b){
  return a > b;
}

int main(){

  ios::sync_with_stdio(false); cin.tie(0);
  int n,m,a;
  vector<int> vet, aux;

  cin >> n;
  while(n--){
    int count = 0;
    cin >> m;
    for(int i = 0; i < m; i++){
      cin >> a;
      vet.push_back(a);
      aux.push_back(a);
    }

    sort(vet.begin(), vet.end(), comp);

    for(int i = 0; i < vet.size(); i++){
      if(vet[i] == aux[i])
        count++;
    }

    cout << count << endl;
    vet.clear();
    aux.clear();
  }

  return 0;
}
