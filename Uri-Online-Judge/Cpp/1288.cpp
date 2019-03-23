#include <bits/stdc++.h>

using namespace std;

int T[51][51];

int backpack(int c, int *wt, int *value, int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<=c; j++){
            if(!i || !j)
                T[i][j] = 0;
            else if(wt[i-1] > j)
                T[i][j] = T[i-1][j];
            else
                T[i][j] = max(value[i-1] + T[i-1][j-wt[i-1]], T[i-1][j]);
        }
    }
    return T[n][c];
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,w,c,r,total;

    cin >> n;
    while(n--){
        cin >> w;
        int wt[50],value[50];
        for(int i=0; i<w; i++)
            cin >> value[i] >> wt[i];
        cin >> c >> r;
        total = backpack(c,wt,value,w);
        if(total>=r)
            cout << "Missao completada com sucesso" << endl;
        else
            cout << "Falha na missao" <<  endl;
    }

    return 0;
}
