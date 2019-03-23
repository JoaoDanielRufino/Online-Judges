#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,m,t,p;
    bool flag = false;
    char field[105][105],cp[105][105];

    cin >> t;
    while(t--){
        cin >> n >> m >> p;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> field[i][j];
                cp[i][j] = field[i][j];
            }
        }
        if(flag)
            cout << endl;
        while(p--){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if(cp[i][j] == 'P'){
                        if(i+1 < n && cp[i+1][j] == 'R')
                            field[i+1][j] = 'P';
                        else if(i+1 < n && cp[i+1][j] == 'S')
                            field[i][j] = 'S';
                        if(j+1 < m && cp[i][j+1] == 'R')
                            field[i][j+1] = 'P';
                        else if(j+1 < m && cp[i][j+1] == 'S')
                            field[i][j] = 'S';
                    }

                    else if(cp[i][j] == 'S'){
                        if(i+1 < n && cp[i+1][j] == 'R')
                            field[i][j] = 'R';
                        else if(i+1 < n && cp[i+1][j] == 'P')
                            field[i+1][j] = 'S';
                        if(j+1 < m && cp[i][j+1] == 'R')
                            field[i][j] = 'R';
                        else if(j+1 < m && cp[i][j+1] == 'P')
                            field[i][j+1] = 'S';
                    }

                    else{
                        if(i+1 < n && cp[i+1][j] == 'S')
                            field[i+1][j] = 'R';
                        else if(i+1 < n && cp[i+1][j] == 'P')
                            field[i][j] = 'P';
                        if(j+1 < m && cp[i][j+1] == 'S')
                            field[i][j+1] = 'R';
                        else if(j+1 < m && cp[i][j+1] == 'P')
                            field[i][j] = 'P';
                    }
                    cp[i][j] = field[i][j];
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << field[i][j];
            }
            cout << endl;
        }
        flag = true;
    }

    return 0;
}
