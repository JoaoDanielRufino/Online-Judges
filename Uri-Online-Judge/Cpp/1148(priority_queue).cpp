#include <bits/stdc++.h>

using namespace std;

vector< vector <pair<int,int> > > vet;
vector<int> dist;

int dijkstra(int x, int y, int n){
   dist.assign(n+1, INT_MAX);

   priority_queue< pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > pq;
   dist[x] = 0;
   pq.push(make_pair(0, x));

   while(!pq.empty()){
      int u = pq.top().second;
      pq.pop();
      if(u == y)
         return dist[y];
      for(int i = 0; i < vet[u].size(); i++){
         int v = vet[u][i].first;
         int wt = vet[u][i].second;
         if(dist[v] > dist[u] + wt){
            dist[v] = dist[u] + wt;
            pq.push(make_pair(dist[v], v));
         }
      }
   }
   return -1;
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
