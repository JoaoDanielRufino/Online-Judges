#include <bits/stdc++.h>

using namespace std;

vector<int> vet[50];
set<char> let[50];
set<char>::iterator it;
int seen[50];

void dfs(int v, int comp){
    char c = (char) v+97;
    let[comp].insert(c);
    seen[v] = 1;
    for(int i=0; i<vet[v].size(); i++){
        int u = vet[v][i];
        if(!seen[u])
            dfs(u,comp);
    }
}

int main(){
    ios::sync_with_stdio(false);

    int i,k,n,e,v,x,y;
    char a,b;

    cin >> n;

    for(int j=0; j<n; j++){
        int comp=0;
        cin >> v >> e;
        for(i=0; i<e; i++){
            cin >> a >> b;
            x = (int) a-97;
            y = (int) b-97;
            vet[x].push_back(y);
            vet[y].push_back(x);
        }
        cout << "Case #" << j+1 << ":\n";
        memset(seen,0,sizeof(seen));
        for(i=0; i<v; i++){
            if(!seen[i]){
                dfs(i,comp);
                for(it=let[comp].begin(); it!=let[comp].end(); it++)
                    cout << *it << ",";
                comp++;
                cout << endl;
            }
        }
        cout << comp << " connected components\n\n";
        for(i=0; i<v; i++){
            vet[i].clear();
            let[i].clear();
        }
    }

    return 0;
}
