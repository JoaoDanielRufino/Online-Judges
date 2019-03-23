#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    int a,b,n,c1,c2;

    while(cin >> n, n){
        c1 = c2 = 0;
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            if(a > b)
                c1++;
            else if(a < b)
                c2++;
        }
        cout << c1 << " " << c2 << endl;
    }

    return 0;
}
