#include <bits/stdc++.h>

using namespace std;

int dx[] = {-1, -1, 0, 0, 1, 1};
int dy[] = {-1, 0, -1, 1, 0, 1};
bool seen[205][205];
char mat[205][205];

bool valid(int x, int y, int n, char c){
    if(x < 0 || x >= n)
        return false;
    if(y < 0 || y >= n)
        return false;
    if(mat[x][y] != c)
        return false;
    if(seen[x][y])
        return false;
    return true;
}

bool dfs(int x, int y, int n, char c){
    seen[x][y] = true;

    if(y == n-1 && mat[x][y] == 'w')
        return true;

    for(int i = 0; i < 6; i++){
        if(valid(x+dx[i], y+dy[i], n, c) && dfs(x+dx[i], y+dy[i], n, c))
            return true;
    }
    return false;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,k = 1;
    bool ok;

    while(cin >> n, n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        ok = false;
        memset(seen, false, sizeof seen);
        for(int i = 0; i < n; i++){
            if(!seen[i][0] && mat[i][0] == 'w'){
                ok = dfs(i, 0, n, 'w');
                if(ok)
                    break;
            }
        }
        if(ok)
            cout << k++ << " W" << endl;
        else
            cout << k++ << " B" << endl;
    }

    return 0;
}
