#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,m,count,k = 1;
    char field[105][105];

    while(cin >> n >> m, (n || m)){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> field[i][j];
            }
        }
        if(k >= 2)
            cout << endl;
        cout << "Field #" << k++ << ":" << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                count = 0;
                if(field[i][j] == '.'){
                    if(i-1 >= 0 && field[i-1][j] == '*')
                        count++;
                    if(i+1 < n && field[i+1][j] == '*')
                        count++;
                    if(j-1 >= 0 && field[i][j-1] == '*')
                        count++;
                    if(j+1 < m && field[i][j+1] == '*')
                        count++;
                    if(i-1 >= 0 && j-1 >=0 && field[i-1][j-1] == '*')
                        count++;
                    if(i-1 >= 0 && j+1 < m && field[i-1][j+1] == '*')
                        count++;
                    if(i+1 < n && j-1 >= 0 && field[i+1][j-1] == '*')
                        count++;
                    if(i+1 < n && j+1 < m && field[i+1][j+1] == '*')
                        count++;
                    field[i][j] = (char) count + 48;
                }
                cout << field[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
