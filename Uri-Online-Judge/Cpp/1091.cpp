#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int k,n,m,x,y;

    while(cin >> k, k){
        cin >> n >> m;
        for(int i = 0; i < k; i++){
            cin >> x >> y;
            if(x == n || y == m)
                cout << "divisa" << endl;
            else if(x > n && y > m)
                cout << "NE" << endl;
            else if(x < n && y > m)
                cout << "NO" << endl;
            else if(x < n && y < m)
                cout << "SO" << endl;
            else
                cout << "SE" << endl;
        }
    }

    return 0;
}
