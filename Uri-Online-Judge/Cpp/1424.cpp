#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int a,b,n,m;
    map<int,vector<int> > mymap;

    while(cin >> n >> m){
        for(int i=0; i<n; i++){
            cin >> a;
            mymap[a].push_back(i);
        }

        for(int i=0; i<m; i++){
            cin >> a >> b;
            if(a <= mymap[b].size())
                cout << mymap[b][a-1]+1 << endl;
            else
                cout << "0" << endl;
        }
        mymap.clear();
    }

    return 0;
}
