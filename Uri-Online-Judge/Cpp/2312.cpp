#include<bits/stdc++.h>

using namespace std;

typedef struct Pais {
    string nome;
    int ouro;
    int prata;
    int bronze;
}Pais;

bool comp(Pais a, Pais b) {
    if(a.ouro > b.ouro)
        return true;
    if(a.ouro < b.ouro)
        return false;

    if(a.prata > b.prata)
        return true;
    if(a.prata < b.prata)
        return false;

    if(a.bronze > b.bronze)
        return true;
    if(a.bronze < b.bronze)
        return false;

    return a.nome < b.nome;
}

int main() {
    int n;
    vector<Pais> paises;

    cin >> n;
    while(n--) {
        Pais p;
        cin >> p.nome >> p.ouro >> p.prata >> p.bronze;
        paises.push_back(p);
    }

    sort(paises.begin(), paises.end(), comp);

    for(Pais p : paises) {
        cout << p.nome;
        printf(" %d %d %d\n", p.ouro, p.prata, p.bronze);
    }
}
