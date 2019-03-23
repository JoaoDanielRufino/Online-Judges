#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,vet[5];
    bool flag = true;

    for(int i = 0; i < 5; i++){
        cin >> n;
        if(!n)
            vet[i] = 1;
        else
            vet[i] = 0;
    }

    for(int i = 0; i < 5; i++){
        cin >> n;
        if(n != vet[i])
            flag = false;
    }

    if(flag)
        cout << "Y" << endl;
    else
        cout << "N" << endl;

    return 0;
}
