#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > vet;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
char mat[55][55];
bool seen[55][55];

bool valid(int x, int y, int n, int m){
    if(x < 0 || x >= n)
        return false;
    if(y < 0 || y >= m)
        return false;
    if(mat[x][y] != 'A')
        return false;
    return true;
}

void dfs(int x, int y, int n, int m){
    seen[x][y] = true;
    mat[x][y] = 'T';

    for(int i = 0; i < 4; i++){
        if(valid(x+dx[i], y+dy[i], n, m))
            dfs(x+dx[i], y+dy[i], n, m);
    }
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,m,p1,p2;

    while(cin >> n >> m){
        if(!n && !m)
            break;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> mat[i][j];
            }
        }
        memset(seen, false, sizeof seen);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!seen[i][j] && mat[i][j] == 'T')
                    dfs(i, j, n, m);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << mat[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
