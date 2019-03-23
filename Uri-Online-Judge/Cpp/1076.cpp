#include <bits/stdc++.h>

using namespace std;

vector<int> vet[50];
int seen[50];

void dfs(int v, int *count){
    seen[v] = 1;
    for(int i=0; i<vet[v].size(); i++){
        int u = vet[v][i];
        if(!seen[u]){
            (*count)++;
            dfs(u,count);
            (*count)++;
        }
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);

    int i,n,a,e,v,b,init;

    cin >> n;

    while(n--){
        cin >> init >> v >> e;
        for(i=0; i<e; i++){
            cin >> a >> b;
            vet[a].push_back(b);
            vet[b].push_back(a);
        }
        int count=0;
        memset(seen,0,sizeof(seen));
        dfs(init,&count);
        cout << count << endl;
        for(i=0; i<v; i++)
            vet[i].clear();
    }

    return 0;
}
