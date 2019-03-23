#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
bool m[5][5];

bool valid(int x, int y){
    if(x < 0 || x > 4)
        return false;
    if(y < 0 || y > 4)
        return false;
    if(m[x][y])
        return false;
    return true;
}

bool dfs(int x, int y){
    m[x][y] = true;

    if(x == 4 && y == 4)
        return true;

    for(int i = 0; i < 4; i++){
        if(valid(x+dx[i], y+dy[i]) && dfs(x+dx[i], y+dy[i]))
            return true;
    }
    return false;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int t,count,a;
    bool flag;

    cin >> t;
    cin.ignore();
    while(t--){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                cin >> a;
                if(a)
                    m[i][j] = true;
                else
                    m[i][j] = false;
            }
        }

        flag = dfs(0, 0);

        if(flag)
            cout << "COPS" << endl;
        else
            cout << "ROBBERS" << endl;
    }

    return 0;
}
