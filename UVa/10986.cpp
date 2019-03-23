#include <bits/stdc++.h>

using namespace std;

vector< vector<pair<int,int> > > vet;
vector<int> dist;

int dijkstra(int init, int end){
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
    int N,n,m,s,t,a,b,c,k = 1;

    cin >> N;

    while(N--){
        cin >> n >> m >> s >> t;
        vet.assign(n, vector<pair<int,int> > ());
        dist.assign(n, INT_MAX);
        while(m--){
            cin >> a >> b >> c;
            vet[a].push_back(make_pair(b, c));
            vet[b].push_back(make_pair(a, c));
        }
        int ok = dijkstra(s, t);
        cout << "Case #" << k++ << ": ";
        if(ok != -1)
            cout << ok << endl;
        else
            cout << "unreachable" << endl;
        vet.clear();
        dist.clear();
    }

    return 0;
}
