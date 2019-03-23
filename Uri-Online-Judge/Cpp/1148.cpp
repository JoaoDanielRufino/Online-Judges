#include <bits/stdc++.h>

using namespace std;

vector< vector <pair<int,int> > > vet;
vector<bool> seen;
vector<int> dist;

int dijkstra(int x, int y, int n){
	seen.assign(n+1, false);
	dist.assign(n+1, INT_MAX);

	int min,minpos,pos,tmp;
	pos = x;
	dist[x] = 0;
	while(1){
		seen[pos] = true;
		for(int i = 0; i < vet[pos].size(); i++){
			tmp = vet[pos][i].second + dist[pos];
			int u = vet[pos][i].first;
			if(dist[u] > tmp)
				dist[u] = tmp;
		}
		min = INT_MAX;
		for(int i = 1; i <= n; i++){
			if(!seen[i] && dist[i] < min){
				min = dist[i];
				minpos = i;
			}
		}
		if(min == INT_MAX)
			return -1;
		if(minpos == y)
			return dist[minpos];
		else
			pos = minpos;
	}
}

int main(){

    	ios::sync_with_stdio(false); cin.tie(0);
	int n,e,x,y,h,k,pos;

	while(cin >> n >> e){
		if(!n && !e)
			break;

		vet.assign(n+1, vector<pair<int,int> > ());
		for(int i = 0; i < e; i++){
			cin >> x >> y >> h;
			pos = -1;
			for(int j = 0; j < vet[y].size(); j++){
				if(vet[y][j].first == x)
					pos = j;
			}
			if(pos != -1){
				vet[x].push_back(make_pair(y, 0));
				vet[y][pos].second = 0;
			}
			else
				vet[x].push_back(make_pair(y, h));
		}

		cin >> k;
		while(k--){
			cin >> x >> y;
			int tmp = dijkstra(x, y, n);
			if(tmp == -1)
				cout << "Nao e possivel entregar a carta" << endl;
			else
				cout << tmp << endl;
		}
		cout << endl;
		vet.clear();
		seen.clear();
		dist.clear();
	}

    return 0;
}
