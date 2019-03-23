#include <bits/stdc++.h>

using namespace std;

vector< vector<int> > vet;
int seen[10005];
bool cycle;

void dfs(int v){
	seen[v] = 1;
	for(int i = 0; i < vet[v].size(); i++){
		int u = vet[v][i];
		if(seen[u] == 1){
			cycle = true;
			return;
		}
		else if(!seen[u])
			dfs(u);
	}
	seen[v] = 2;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int t,n,m,a,b;

    cin >> t;

    while(t--){
        cin >> n >> m;

		cycle = false;
		vet.assign(n+1, vector<int>());
		memset(seen, 0, sizeof(seen));

        for(int i = 0; i < m; i++){
            cin >> a >> b;
            vet[a].push_back(b);
        }

    	for(int i = 1; i <= n; i++){
			if(!seen[i])
				dfs(i);
			if(cycle)
				break;
		}

		if(cycle)
			cout << "SIM" << endl;
		else
			cout << "NAO" << endl;

		vet.clear();
	}

    return 0;
}
