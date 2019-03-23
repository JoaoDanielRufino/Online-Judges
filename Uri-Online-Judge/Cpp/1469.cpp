#include <bits/stdc++.h>

using namespace std;

vector<int> vet[550];
int age[550];
bool seen[550];

void dfs(int v, int *min){
    seen[v] = true;

    for(int i = 0; i < vet[v].size(); i++){
        int u = vet[v][i];
        if(!seen[u]){
            if(age[u-1] < *min)
                *min = age[u-1];
            dfs(u, min);
        }
    }
}

void my_swap(int n, int a, int b){
    vet[a].swap(vet[b]);

    for(int i = 0; i <= n; i++){
        for(int j = 0; j < vet[i].size(); j++){
            if(vet[i][j] == a)
                vet[i][j] = b;
            else if(vet[i][j] == b)
                vet[i][j] = a;
        }
    }
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,m,l,a,b,min;
    char op;

    while(cin >> n >> m >> l){
        for(int i = 0; i < n; i++)
            cin >> age[i];

        while(m--){
            cin >> a >> b;
            vet[b].push_back(a);
        }

        while(l--){
            cin >> op;
            if(op == 'P'){
                cin >> a;
                if(!vet[a].size())
                    cout << "*" << endl;
                else{
                    memset(seen, false, sizeof(seen));
                    min = 1000;
                    dfs(a, &min);
                    cout << min << endl;
                }
            }
            else if(op == 'T'){
                cin >> a >> b;
                my_swap(n, a, b);
            }
        }
        for(int i = 0; i < 550; i++)
            vet[i].clear();
    }

    return 0;
}
