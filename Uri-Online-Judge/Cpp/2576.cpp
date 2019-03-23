#include <bits/stdc++.h>

using namespace std;

vector< vector <pair<int,int> > > vet;
vector<int> dist;

int dijkstra(int init, int end, int n){
    dist.assign(n, INT_MAX);
    priority_queue< pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > pq;

    dist[init] = 0;
    pq.push(make_pair(0, init));
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();

        if(u == end)
				return dist[end];

        for(int i = 0; i < vet[u].size(); i++){
            int v = vet[u][i].first;
            int wt = vet[u][i].second + dist[u];
            if(dist[v] > wt){
                dist[v] = wt;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
	 return -1;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int c,s,init,end,a,b,bibi,bibika;

    cin >> c >> s >> init >> end;

    vet.assign(c, vector<pair<int,int> > ());

    while(s--){
        cin >> a >> b;
        vet[a-1].push_back(make_pair(b-1, 0));
        vet[b-1].push_back(make_pair(a-1, 1));
    }

    bibi = dijkstra(init-1, end-1, c);
    bibika = dijkstra(end-1, init-1, c);

    if(bibi == -1 || bibika == -1)
        cout << "Bibibibika" << endl;
    else if(bibi < bibika)
        cout << "Bibi: " << bibi << endl;
    else if(bibi > bibika)
        cout << "Bibika: " << bibika << endl;
    else
        cout << "Bibibibika" << endl;

    return 0;
}
