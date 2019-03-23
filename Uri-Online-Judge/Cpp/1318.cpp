#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,m,count,a;
    map<int,pair<int,bool> > mp;

    while(cin >> n >> m){
        if(!n && !m)
            break;

        count = 0;
        while(m--){
            cin >> a;
            mp[a].first++;
            if(mp[a].first > 1 && !mp[a].second){
                count++;
                mp[a].second = true;
            }
        }
        cout << count << endl;
        mp.clear();
    }

    return 0;
}
