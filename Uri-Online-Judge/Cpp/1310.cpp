#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,a,custo,max,aux;
    vector<int> vet;

    while(cin >> n){
        cin >> custo;
        aux = max = 0;
        for(int i = 0; i < n; i++){
            cin >> a;
            vet.push_back(a-custo);
            aux += vet[i];
            if(aux < 0)
                aux = 0;
            if(aux > max)
                max = aux;
        }
        cout << max << endl;
        vet.clear();
    }

    return 0;
}
