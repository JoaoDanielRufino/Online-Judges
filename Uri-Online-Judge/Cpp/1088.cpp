#include <bits/stdc++.h>

using namespace std;

int mergesort(vector<int> &vet){
    if(vet.size() == 1)
        return 0;

    int trocas,j,k;

    vector <int> aux1,aux2;
    for(int i=0; i<vet.size()/2; i++)
        aux1.push_back(vet[i]);

    for(int i=vet.size()/2; i<vet.size(); i++)
        aux2.push_back(vet[i]);

    trocas = j = k = 0;
    trocas += mergesort(aux1);
    trocas += mergesort(aux2);

    aux1.push_back(10000000);
    aux2.push_back(10000000);

    for(int i=0; i<vet.size(); i++){
        if(aux1[k] < aux2[j])
            vet[i] = aux1[k++];
        else{
            vet[i] = aux2[j++];
            trocas += aux1.size() - k - 1;
        }
    }
    return trocas;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,x,trocas;
    vector<int> vet;

    while(cin >> n, n){
        for(int i=0; i<n; i++){
            cin >> x;
            vet.push_back(x);
        }
        trocas = mergesort(vet);
        if(!(trocas%2))
            cout << "Carlos" << endl;
        else
            cout << "Marcelo" << endl;
        vet.clear();
    }

    return 0;
}
