#include <bits/stdc++.h>

using namespace std;

typedef struct pessoa{
    char tam;
    string nome,cor;
}Pessoa;

bool comp(const Pessoa a, const Pessoa b){
    if(a.cor != b.cor)
        return a.cor < b.cor;
    if(a.tam != b.tam)
        return a.tam > b.tam;
    return a.nome < b.nome;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    bool flag=false;
    Pessoa p[60];

    while(1){
        cin >> n;
        if(!n)
            break;
        if(flag)
            cout << endl;
        flag = true;
        for(int i = 0; i < n; i++){
            cin.ignore();
            getline(cin,p[i].nome);
            cin >> p[i].cor >> p[i].tam;
        }
        sort(p, p + n, comp);
        for(int i = 0; i < n; i++)
            cout << p[i].cor << " " << p[i].tam << " " << p[i].nome << endl;
    }

    return 0;
}
