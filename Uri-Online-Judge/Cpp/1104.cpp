#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int a,b,al,be,n,i,max=-1;

    while(cin >> a >> b, (a || b)){
        bool vet1[100000] = {false}, vet2[100000] = {false};
        for(i = 0; i < a; i++){
            cin >> n;
            vet1[n] = true;
            if(n > max)
                max = n;
        }
        for(i = 0; i < b; i++){
            cin >> n;
            vet2[n] = true;
            if(n > max)
                max = n;
        }
        al = be = 0;
        for(i = 0; i <= max; i++){
            if(vet1[i] && !vet2[i])
                al++;
            else if(!vet1[i] && vet2[i])
                be++;
        }
        if(al < be)
            cout << al << endl;
        else
            cout << be << endl;
    }

    return 0;
}
