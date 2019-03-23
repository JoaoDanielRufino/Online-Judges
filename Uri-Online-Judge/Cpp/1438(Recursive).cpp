#include <bits/stdc++.h>

using namespace std;

int posVet,posCaixa;

int solve(vector<int> vet, int index){
  if(index == vet.size() || index < 0 || vet[index] < posCaixa)
    return 0;

  int aux = (vet[index] - posCaixa) + 1;

  if(index > posVet)
    index++;
  else
    index--;

  return aux + solve(vet, index);
}

int main(){

  ios::sync_with_stdio(false); cin.tie(0);
  int n,p,q,caixa,esq,dir;
  vector<int> vet;

  while(cin >> n >> p, (n || p)){
    for(int i = 0; i < p; i++){
      cin >> q;
      for(int j = 0; j < q; j++){
        cin >> caixa;
        if(caixa == 1){
          posVet = i; // Indica em qual indice do vetor a caixa esta
          posCaixa = j+1; // Indica a posicao da pilha que a caixa esta
        }
      }
      vet.push_back(q);
    }

    esq = solve(vet, posVet-1) + vet[posVet] - posCaixa;
    dir = solve(vet, posVet+1) + vet[posVet] - posCaixa;

    cout << min(esq, dir) << endl;

    vet.clear();
  }

  return 0;
}
