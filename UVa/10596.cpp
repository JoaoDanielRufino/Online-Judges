#include <bits/stdc++.h>

using namespace std;

vector< vector<int> > vet;
vector<int> seen;

void dfs(int u){
    seen[u] = true;

    for(int i = 0; i < vet[u].size(); i++){
        int v = vet[u][i];
        if(!seen[v])
            dfs(v);
    }
}

bool isConnected(){
    int tmp = -1;
    for(int i = 0; i < vet.size(); i++){
        if(vet[i].size() != 0){
            tmp = i;
            break;
        }
    }

    if(tmp == -1)
        return false;

    dfs(tmp);

    for(int i = 0; i < vet.size(); i++){
        if(!seen[i] && vet[i].size() != 0)
            return false;
    }

    return true;
}

bool hasEulerianPath(){
    if(!isConnected())
        return false;

    int odd = 0;
    for(int i = 0; i < vet.size(); i++){
        if(vet[i].size() & 1)
            odd++;
    }

    if(!odd)
        return true;

    else
        return false;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,r,a,b;

    while(cin >> n >> r){
        vet.assign(n, vector<int> ());
        seen.assign(n, false);

        for(int i = 0; i < r; i++){
            cin >> a >> b;
            vet[a].push_back(b);
            vet[b].push_back(a);
        }

        if(hasEulerianPath())
            cout << "Possible";
        else
            cout << "Not Possible";

        cout << endl;
        vet.clear();
        seen.clear();
    }

    return 0;
}
