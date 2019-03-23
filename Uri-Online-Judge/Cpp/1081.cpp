#include <bits/stdc++.h>

using namespace std;

set<int> myset[30];
bool seen[30];

void dfs(int v, int space){
    seen[v] = true;
    for(set<int>::iterator it = myset[v].begin(); it != myset[v].end(); it++){
        int u = *it;
        for(int i = 0; i < space; i++)
            cout << " ";
        if(!seen[u]){
            cout << v << "-" << u << " pathR(G," << u << ")" << endl;
            dfs(u, space+2);
        }
        else
            cout << v << "-" << u << endl;
    }
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,v,e,a,b;

    cin >> n;

    for(int i = 1; i <= n; i++){
        memset(seen, true, sizeof(seen));
        cin >> v >> e;
        while(e--){
            cin >> a >> b;
            myset[a].insert(b);
            seen[a] = seen[b] = false;
        }
        cout << "Caso " << i << ":" << endl;
        for(int j = 0; j < v; j++){
            if(!seen[j]){
                dfs(j, 2);
                cout << endl;
            }
        }
        for(int j = 0; j < v; j++)
            myset[j].clear();
    }

    return 0;
}
