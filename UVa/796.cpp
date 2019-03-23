#include <bits/stdc++.h>

using namespace std;

vector< vector<int> > vet;
vector<int> parent,low_time,discovery_time;
vector<bool> seen;

void find_bridges(set< pair<int,int> > &bridges, int u, int my_time){
    seen[u] = true;
    low_time[u] = my_time;
    discovery_time[u] = my_time;

    for(int i = 0; i < vet[u].size(); i++){
        //Current adj of u
        int current = vet[u][i];

        if(!seen[current]){
            parent[current] = u;
            find_bridges(bridges, current, my_time+1);

            low_time[u] = min(low_time[u], low_time[current]);

            if(low_time[current] > discovery_time[u]){
                if(u < current)
                    bridges.insert(make_pair(u, current));
                else
                    bridges.insert(make_pair(current, u));
            }
        }

        else if(current != parent[u])
            low_time[u] = min(low_time[u], discovery_time[current]);
    }
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,m,t,a,b;
    char z,x;
    set< pair<int,int> > bridges;

    while(cin >> t){
        vet.assign(t, vector<int> ());
        seen.assign(t, false);
        parent.assign(t, -1);
        low_time.assign(t, 0);
        discovery_time.assign(t, 0);

        for(int k = 0; k < t; k++){
            cin >> a;
            cin >> z >> m >> x;
            for(int i = 0; i < m; i++){
                cin >> b;
                vet[a].push_back(b);
            }
        }

        for(int i = 0; i < t; i++){
            if(!seen[i])
                find_bridges(bridges, i, 1);
        }

        cout << bridges.size() << " critical links" << endl;
        set< pair<int,int> >::iterator it;
        for(it = bridges.begin(); it != bridges.end(); it++){
            cout << it->first << " - " << it->second << endl;
        }

        cout << endl;
        vet.clear();
        bridges.clear();
        seen.clear();
        low_time.clear();
        discovery_time.clear();
    }

    return 0;
}
