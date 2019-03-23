#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    long long int n,m,a;
    set<long long int> myset;

    while(cin >> n >> m, (n || m)){
        for(int i = 0; i < n; i++){
            cin >> a;
            myset.insert(a);
        }
        for(int i = 0; i < m; i++){
            cin >> a;
            myset.insert(a);
        }
        cout << (n+m)-myset.size() << endl;
        myset.clear();
    }

    return 0;
}
