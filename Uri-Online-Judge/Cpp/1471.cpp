#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int n,m,count,a;
    map<int,bool> mp;

    while(cin >> n >> m){
        if(!n && !m)
            break;

        for(int i = 0; i < m; i++){
            cin >> a;
            mp[a] = true;
        }
        count = 0;
        for(int i = 1; i <= n; i++){
            if(!mp[i]){
                //if(!count)
                    cout << i << " ";
                //else
                    //cout << " " << i;
                count++;
            }
        }
        if(!count)
            cout << "*";
        cout << endl;
        mp.clear();
    }

    return 0;
}
