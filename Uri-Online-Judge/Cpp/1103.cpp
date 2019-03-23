#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int h1,m1,h2,m2,inicio,fim;

    while(cin >> h1 >> m1 >> h2 >> m2){
        if(!h1 && !m1 && !h2 && !m2)
            break;
        if(!h1)
            inicio = 24*60 + m1;
        else
            inicio = h1*60 + m1;
        if(!h2)
            fim = 24*60 + m2;
        else
            fim = h2*60 + m2;
        if(fim > inicio)
            cout << fim - inicio << endl;
        else
            cout << 24*60 - (inicio - fim) << endl;
    }

    return 0;
}
