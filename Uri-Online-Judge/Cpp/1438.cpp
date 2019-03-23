#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(false); cin.tie(0);
  int n,p,q,caixa,posVet,posCaixa;
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

    int esq, dir;
    esq = dir = (vet[posVet] - posCaixa);

    for(int i = posVet+1; i < p; i++){
      if(vet[i] >= posCaixa)
        dir += (vet[i] - posCaixa) + 1;
      else
        break;
    }

    for(int i = posVet-1; i >= 0; i--){
      if(vet[i] >= posCaixa)
        esq += (vet[i] - posCaixa) + 1;
      else
        break;
    }

    cout << min(esq, dir) << endl;


    vet.clear();
  }

  return 0;
}
