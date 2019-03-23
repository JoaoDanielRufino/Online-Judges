#include <bits/stdc++.h>

using namespace std;

void counting_sort(vector<int> &vet, int max){
  int aux[max+1];
  memset(aux, 0, sizeof aux);

  for(int i = 0; i < vet.size(); i++)
    aux[vet[i]]++;
    
  int i = 0;
  for(int j = 0; j <= max; j++){
    while(aux[j]--)
    vet[i++] = j;
  }
}

int main(){

  ios::sync_with_stdio(false); cin.tie(0);
  int n,m,a;
  vector<int> vet;

  cin >> n;
  while(n--){
    int max = -1;
    cin >> m;
    for(int i = 0; i < m; i++){
      cin >> a;
      vet.push_back(a);
      max = a > max ? a : max;
    }

    counting_sort(vet, max);

    for(int i = 0; i < vet.size(); i++){
      if(i)
        cout << " " << vet[i];
      else
        cout << vet[i];
    }
    cout << endl;
    vet.clear();
  }
  return 0;
}
