#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    long long int t,n,m,a,b;

    cin >> t;

    while(t--){
        cin >> n >> m;
        if((n + m)%2LL != 0LL)
            cout << "impossible" << endl;
        else{
            a = (n + m)/2LL;
            b = -(m - a);
            if(b < 0LL)
                cout << "impossible" << endl;
            else
                cout << max(a, b) << " " << min(a, b) << endl;
        }
    }

    return 0;
}
