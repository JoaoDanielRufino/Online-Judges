#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,b,h,w,aux,tmp,p,beds;

    while(cin >> n >> b >> h >> w){
        tmp = INT_MAX;
        while(h--){
            cin >> p;
            aux = 0;
            for(int i = 0; i < w; i++){
                cin >> beds;
                aux = max(aux, beds);
            }
            if(aux >= n)
                tmp = min(tmp, n*p);
        }
        if(tmp > b)
            cout << "stay home" << endl;
        else
            cout << tmp << endl;
    }

    return 0;
}
